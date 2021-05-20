#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	int ans, ans2, i;
	int min = 0;//答えの下限
	int max = 100;//答えの上限

	srand((unsigned)time(NULL));

	ans = rand() % (max-1) + (min+1);

	for (i = 0; i < 10; i++) {

		while (1) {
			printf("残り%dゲーム\n", 10 - i);
			printf("数を当ててください(%d < x < %d) > ", min, max);
			scanf_s("%d", &ans2);
			if (ans2 > min && ans2 < max)break;
			else {
				printf("不正な数です。やり直してください。\n");
				continue;
			}
		}

		if (ans == ans2) {
			printf("正解\n");
			break;
		}
		else {
			printf("残念\n");
			if (ans2 < ans) {
				min = ans2;
			}
			else {
				max = ans2;
			}
		}
	}

	if (i == 10) {
		printf("ゲームオーバー\n");
	}

	return 0;
}