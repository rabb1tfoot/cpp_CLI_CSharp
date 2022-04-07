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
using System.Windows.Forms;
using System.Diagnostics;
using System.Runtime.InteropServices;
using WpfUI;
namespace WpfAppp
{
    /// <summary>
    /// MainWindow.xaml에 대한 상호 작용 논리
    /// </summary>
    public partial class MainWindow : Window
    {
        CLRUserclass clruser;
        public MainWindow()
        {
            InitializeComponent();
            clruser = new CLRUserclass();
        }
        

        private void Button_Click_1(object sender, RoutedEventArgs e) //show wpf
        {
            clruser.open();
        }

        private void BtnSetName_Click(object sender, RoutedEventArgs e)
        {
            clruser.SetName(tbName.Text.ToString());
        }

        private void BtnPrintName_Click(object sender, RoutedEventArgs e)
        {
            lbName.Content = clruser.GetName();
        }

        private void BtnSetvalue_Click(object sender, RoutedEventArgs e)
        {
            clruser.Changevalue(int.Parse(tbIdx.Text), int.Parse(tbValue.Text));
        }
        
        private void BtnPrintvalue_Click(object sender, RoutedEventArgs e)
        {
            lbValue.Content = clruser.Getvalue(int.Parse(tbIdx.Text));
        }

        unsafe private void BtnSetArr_Click(object sender, RoutedEventArgs e)
        {
            string[] str = tbArr.Text.ToString().Split(',');
            int idx = str.Length;

            fixed (int* iArr = new int[10])
            {
                for (int i = 0; i < idx; ++i)
                {
                    iArr[i] = int.Parse(str[i]);
                }
                clruser.SetArr(iArr, idx);
            }
        }
        unsafe private void BtnPrintArr_Click(object sender, RoutedEventArgs e)
        {
            string str = "";
            fixed (int* iArr = new int[10])
            {
                clruser.GetArr(iArr);
                for (int i = 0; i < 10; ++i)
                {
                    if (iArr[i] == 0)
                        break;

                    str += (iArr[i].ToString() + " , ");
                }
                lbArr.Content = str;
            }
        }

        unsafe private void BtnSetByte_Click(object sender, RoutedEventArgs e)
        {
            string[] str = tbByte.Text.ToString().Split(',');
            int idx = str.Length;

            fixed (byte* bArr = new byte[10])
            {
                for (int i = 0; i < idx; ++i)
                {
                    bArr[i] = byte.Parse(str[i]);
                }
                clruser.SetByteArr(bArr, idx);
            }
        }

        unsafe private void BtnPrintByte_Click(object sender, RoutedEventArgs e)
        {
            string str = "";
            fixed (byte* BArr = new byte[10])
            {
                clruser.GetByteArr(BArr);
                for (int i = 0; i < 10; ++i)
                {
                    str += (BArr[i].ToString() + " , ");
                }
                lbByte.Content = str;
            }
        }
    }
}
