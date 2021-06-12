/*プログラミング講習会*/
/*L05_01にコンストラクタをもちいたもの*/

using System;

class Sample //クラス
    {
        int r; //メンバ変数
        
        public Sample(int r){ //これがコンストラクタ
            //コンストラクタの処理を記述する
            this.r = r; //引数として渡された値をメンバ変数rに代入
        }
        public void Circle() //メンバ関数
        {
            double cir = 2 * 3.14 * r;
            Console.WriteLine("半径：" + r + ", 円周の長さ：" + cir);
        }
        public static void Main()
        {
            Sample cls = new Sample(4); //インスタンスを生成する際に、コンストラクタへ渡す引数を指定する
            cls.Circle(); //メンバ関数の呼び出し
        }
    }