#include<stdio.h>

int main() {
	int a = 1;
	int b = 2;
	int c=0;
	int i=0;//ループカウンタ

	//while文 : while(条件式){}　条件式の条件を満たしている間中身を繰り返し続ける
	while (c<20)
	{
		c = c + a * b;
		i++;
		printf("cの値:%d　ループ回数:%d\n",c,i);
	}
	return 0;
}
