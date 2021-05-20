#include<stdio.h>

int main() {
	int a=3;
	int b=2;
	int c=0;

	int i=0;//ループカウンタ
	int m = 10;//ループの上限
	//do while文 : do{　}while(条件文); 
	//ほぼwhile文と処理は変わらない。違いは必ず一回は処理を行うという点
	//(whileは中の処理を行う前から条件を満たしているかの判断を行う)
	do {
		c = (a + b) * c;
		i++;
		printf("c : %d , ループ回数 : %d\n",c,i);
		if (i > m) {
			//break文 : 繰り返し処理を行う途中で使われる場合がある
			//			強制的に繰り返し処理を終了するための文
			//          今回のように∞ループ対策やwhileの終了条件を複数設けたい場合に使われる
			printf("ループ回数が規定値を超えたためループ処理を抜けます\n");
			break;
		}
	} while (c < 20);

	return 0;
}