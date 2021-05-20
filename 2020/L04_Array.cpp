#include<stdio.h>

#define MAX  100//配列の最大サイズ

int main() {
	int a[MAX];
	int b[MAX];

	int i;

	for (i = 0; i < 5; i++) {
		a[i] = i * 3;
	}
	i = 0;
	while (i < 5) {
		printf("a=%d\n", a[i]);
		i++;
	}

	a[5] = 3;
	b[3] = 10;

	printf("b[3]=%d\n",b[a[5]]);

	return 0;

}