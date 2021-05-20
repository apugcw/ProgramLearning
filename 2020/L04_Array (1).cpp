#include<stdio.h>
//#define:マジックナンバーを使わないようにするため、
//全体を通して利用すような定数は最初に決める
#define MAX 100
#define NEDAN  50//配列の最大サイズ
#define SYOUHIN 50
#define NAME 264

int main() {
	int okashi[SYOUHIN][NEDAN];//配列
	char name[NAME];
	int b[MAX];//配列

	int i;//ループカウンタ

	//a[0]～a[4]それぞれに値を格納
	for (i = 0; i < 5; i++) {
		okashi[i][i] = i * 3;
	}
	i = 0;
	while (i < 5) {//各値を表示
		printf("a=%d\n", a[i]);
		i++;
	}

	a[5] = 3;
	b[3] = 10;

	//配列の場所を指定するのに配列を使える
	printf("b[3]=%d\n",b[a[5]]);

	return 0;

}