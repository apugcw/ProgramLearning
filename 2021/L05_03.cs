/*プログラミング講習会*/

using System;

 class Person //Personクラス
    {
        string name;
        int age;
        public Person(string name, int age) //これがコンストラクタ
        {
            this.name = name;
            this.age = age;
            Console.WriteLine("Personクラスのコンストラクタ");
            Console.WriteLine("名前: " + name + ", 年齢: " + age);
        }
    }
    class Employee : Person // Personクラスを継承した、Employeeクラス
    {
        int id;
        string department;
        public Employee(string name, int age, int id, string department) : base(name, age) //これがコンストラクタ
        {
            this.id = id;
            this.department = department;
            Console.WriteLine("Employeeクラスのコンストラクタ");
            Console.WriteLine("社員番号: " + id + ", 部署: " + department);
        }
        //以下のように呼び出すクラスのなかでmainを実行することも出来る
        public static void Main(){
            Employee empl_1 = new Employee("ichiro", 25, 123456, "system"); //インスタンスを生成
        }
    }