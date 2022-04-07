using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using ClassLib;

namespace cppdllusecsharp
{
    class Program
    {
        static void Main(string[] args)
        {
            ClassLib.ClassLib man1 = new ClassLib.ClassLib();
            ClassLib.ClassLib man2 = new ClassLib.ClassLib();

            //man1.GetEnum();

            Console.WriteLine("static func : {0}", man1.GetStaticInt());
            Console.WriteLine("glocal const : {0}", man1.GetGolbal());
            Console.WriteLine("local const : {0}", man1.Getlocal());
            Console.WriteLine("enum #1 {0}", man1.GetEnumint());
            man1.SetCurSalery(2000);
            man2.SetCurSalery(2000);
            int money = man1.GetCurSalery();
            int money2 = man2.GetCurSalery();

            Console.WriteLine("1st year man1 : {0}", money);
            Console.WriteLine("1st year man2 : {0}", money2);

            man1.AddSalery(1000);
            man2.SubSalery(1000);

            money = man1.GetCurSalery();
            money2 = man2.GetCurSalery();

            Console.WriteLine("2nd yearman1 : {0}", money);
            Console.WriteLine("2nd yearman2 : {0}", money2);


            Console.ReadLine();


        }
    }
}
