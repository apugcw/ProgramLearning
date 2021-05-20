#include<stdio.h>

int main() {
	int a = 2;
	int b = 3;

	int i,j;//ループカウンタ
	int n = 5;//ループ回数

	//for文 : for(カウンタの初期値; ループ条件; カウンタの変化方法;){}
	//カウンタがループ条件を満たしている間for{}の中身を繰り返し続ける
	//i++ : i = i+1;　を実行しているのと同じ (i--を行うとi=i-1となる)
	for (i = 0; i < n; i++) {
		a = a + b;
		printf("aの値:%d　実行回数:%d\n",a,i+1);
	}
	//aにbを加えることを5回行う

	/*
	//内側のforがすべて実行されると外側のforのカウンタが1進む
	for (i = 1; i < n; i++) {
		for (j = 0; j < i; j++) {
			printf("各ループの実行回数:i=%d , j=%d",i,d);
		}

	}
	*/

	return 0;
}