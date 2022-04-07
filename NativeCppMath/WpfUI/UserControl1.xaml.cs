using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows;
using System.Windows.Controls;
using System.Windows.Data;
using System.Windows.Documents;
using System.Windows.Input;
using System.Windows.Media;
using System.Windows.Media.Imaging;
using System.Windows.Navigation;
using System.Windows.Shapes;
using System.Runtime.InteropServices;
namespace WpfUI
{
    /// <summary>
    /// UserControl1.xaml에 대한 상호 작용 논리
    /// </summary>
    public partial class UserControl1 : Window
    {
        public delegate void DelegateNotify();
        public event DelegateNotify SendDel;

        public UserControl1()
        {
            InitializeComponent();
        }

        unsafe private void BtnName_Click(object sender, RoutedEventArgs e)
        {
            CLRWapper.GetInstance().SetName(TboxName.Text.ToString());
        }
        unsafe private void BtnNamePrint_Click(object sender, RoutedEventArgs e)
        {
            LBName.Content = CLRWapper.GetInstance().GetName();
        }

        private void BtnArr_Click(object sender, RoutedEventArgs e)
        {
            CLRWapper.GetInstance().Changevalue(int.Parse(TBoxIdx.Text), int.Parse(TBoxValue.Text));
           
        }

        private void BtnArrPrint_Click(object sender, RoutedEventArgs e)
        {
            LBvalue.Content = CLRWapper.GetInstance().Getvalue(int.Parse(TBoxIdx.Text));
        }

        unsafe private void BtnArrSet_Click(object sender, RoutedEventArgs e)
        {
            string[] str = TboxArr.Text.ToString().Split(',');
            int idx = str.Length;

            fixed (int* iArr = new int[10])
            {
                for (int i = 0; i < idx; ++i)
                {
                    iArr[i] = int.Parse(str[i]);
                }
                CLRWapper.GetInstance().SetArr(iArr, idx);
            }
        }
        unsafe private void BtnArrPrint1_Click(object sender, RoutedEventArgs e)
        {
            string str="";
            fixed (int* iArr = new int[10])
            {
                CLRWapper.GetInstance().GetArr(iArr);
                for(int i = 0; i < 10; ++i)
                {
                    if (iArr[i] == 0)
                        break;

                    str += (iArr[i].ToString() +" , ");
                }
                LBArr.Content = str;
            }
        }

        unsafe private void BtnBytePrint_Click(object sender, RoutedEventArgs e)
        {
            string[] str = TboxBArr.Text.ToString().Split(',');
            int idx = str.Length;

            fixed (byte* bArr = new byte[10])
            {
                for (int i = 0; i < idx; ++i)
                {
                    bArr[i] = byte.Parse(str[i]);
                }
                CLRWapper.GetInstance().SetByteArr(bArr, idx);
            }
        }
        unsafe private void BtnByteSet_Click(object sender, RoutedEventArgs e)
        {
            string str = "";
            fixed (byte* BArr = new byte[10])
            {
                CLRWapper.GetInstance().GetByteArr(BArr);
                for (int i = 0; i < 10; ++i)
                {
                    str += (BArr[i].ToString() + " , ");
                }
                LBArr.Content = str;
            }
        }


        //public Action DelegateNotifyClosed = null;
        private void NotifyClose()
        {
            //if(DelegateNotifyClosed != null)
            //    DelegateNotifyClosed();
            SendDel();
        }

        private void Window_Closed(object sender, EventArgs e)
        {
            NotifyClose();
        }
    }
}
