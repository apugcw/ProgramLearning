#include <stdio.h>

int main()
{
	//変数宣言
	int a; // intは整数型 
	double b; //doubleは実数型
	char c;   //charは文字型

	//代入
	a = 1234;      
	b = 567;
	c = 'A'; 

	//表示
	printf("a = %d%d\n", a,a); //%d は、整数 a と置き換わる 
	printf("b = %f\n", b); //%f は、実数 b と置き換わる 
	printf("c = %c\n", c); //%c は、文字 c と置き換わる 

	return 0;
}