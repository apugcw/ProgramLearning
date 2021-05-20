#include<stdio.h>

int main() {
	int i, j;//ループカウンタ

	for (i = 1; i <= 9; i++) {
		for (j = 1; j <= 9; j++) {
			//値の参照では計算結果を参照することが可能である
			//%値dとすることで値分のスペースを確保することができる
			printf("%d*%d=%2d　", i, j, i * j);
		}
		printf("\n");
	}

	return 0;
}