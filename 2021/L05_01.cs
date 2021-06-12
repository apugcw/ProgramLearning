using System;
 
namespace SampleApplication
{
    class Sample //クラス
    {
        int r; //メンバ変数
        public void Circle() //メンバ関数
        {
            double cir = 2 * 3.14 * r;
            Console.WriteLine("半径：" + r + ", 円周の長さ：" + cir);
        }
        public static void Main()
        {
            Sample cls = new Sample(); //１行の形でインスタンスを生成
            cls.r = 4; //メンバ変数に値を代入
            cls.Circle(); //メンバ関数の呼び出し
        }
    }
}