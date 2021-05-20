#include <stdio.h>
#include <stdlib.h>//乱数生成に必要
#include <time.h>//乱数生成に必要

int main() {
	int key = 0;//私の出す手
	int com = 0;//コンピュータが出す手

	srand((unsigned)time(NULL));//乱数のリセット

	printf("じゃんけん\n");
	printf("何を出しますか？0・グー　1・チョキ　2・パー\n");
	printf("番号を入れてください > ");

	scanf_s("%d", &key);

	com = (rand() % 3);//乱数

	//keyが0以上かつkeyが2以下の条件分岐
	if (key >= 0 && key <= 2) {
		printf("\n");
		printf("私の手 : ");
		//keyの値による条件分岐
		switch (key) {
		case 0:
			printf("グー");
			break;
		case 1:
			printf("チョキ");
			break;
		case 2:
			printf("パー");
			break;
		default:
			break;
		}
		printf("・");
		printf("comの手 : ");
		//comの値による条件分岐
		switch (com) {
		case 0:
			printf("グー");
			break;
		case 1:
			printf("チョキ");
			break;
		case 2:
			printf("パー");
			break;
		default:
			break;
		}
		printf("・");
		printf("結果 : ");
		if (key == com) {
			printf("あいこ");
		}
		else if (key == 0 && com == 2) {
			printf("comの勝ち");
		}
		else if (key == 1 && com == 0) {
			printf("comの勝ち");
		}
		else if (key == 2 && com == 1) {
			printf("comの勝ち");
		}
		else {
			printf("私の勝ち");
		}
	}
	else {
		printf("\n");
		printf("0か1か2を選んでね！");
	}
	printf("\n\n");

	return 0;
}