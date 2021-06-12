/*プログラミング講習会*/

using System;

class Class1 //クラス
    {
        public string message;
        public Class1() //引数なし
        {
            Console.WriteLine("Class1 Constructor0()");
        }
        public Class1(string message) //引数１つ
        {
            this.message = message;
            Console.WriteLine("Class1 Constructor1() message: " + this.message);
        }
        public static void Main()
        {
            Class1 cls1_1 = new Class1();
            Class1 cls1_2 = new Class1("Hello World!");
        }
    }