#include<stdio.h>

//プロトタイプ宣言:自作の関数を作成するために事前にどのような関数なのかを定義する
//引数:関数を利用する時に送る初期値　戻り値:関数を利用して得た値
//どちらも必ず必要というわけではないが、引数は基本必要になる
//宣言方法:戻り値の型　関数名(引数1,引数2...);
void p_hello();//引数なし,戻り値なし
double my_pow(double value);//引数:double型1つ,戻り値:double型

int main() {
	double a=5.5;
	double b;

	p_hello();
	
	b = my_pow(a);
	printf("a*a=%lf\n", b);

	return 0;
}

//hello と表示する関数
void p_hello() {
	printf("hello\n");
}
//引数の二乗を戻り値とする関数
double my_pow(double value) {
	return value * value;
}