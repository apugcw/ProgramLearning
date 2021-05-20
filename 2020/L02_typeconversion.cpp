#include<stdio.h>

int main() {

	int a = 3;
	double b = 2.5;
	double c = 0.0;

	//aをint型からdouble型に一時的に変換
	//型がそろっていないと基本的には演算できない
	c = (double)a + b;

	printf("%d+%.2f=%.2f",a,b,c);
	
	//基本的な変数の型
	//int=整数　double=少数　float=自然数　char=文字
}