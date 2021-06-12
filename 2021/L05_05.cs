/*プログラミング講習会*/

using System;
 
//基底クラス
class SpClass
{
    public string i = "変更されない部分";
	public virtual void orTest()  //virtualを付与
	{
		Console.WriteLine("基底クラス");
	}		
}
 
//派生クラス
class SbClass : SpClass
{
	public override void orTest()  //overrideを付与
	{
		Console.WriteLine("オーバーライド");
	}
}	
 
//実行
class SpSbClass
{
	static void Main()
	{
		//基底クラスをオブジェクト化
		SpClass x = new SpClass();
		x.orTest();
        Console.WriteLine(x.i);
		
		//派生クラスをオブジェクト化
		SbClass y = new SbClass();
		y.orTest();
        Console.WriteLine(y.i);
	}
}