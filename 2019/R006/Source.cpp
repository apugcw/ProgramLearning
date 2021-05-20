#include <stdio.h>

int multiply(int a,int b);//a~b‚ğ‚·‚éŠÖ”

int main() 
{
	int i, j;
	int ans[9][9];

	for (i = 0; i < 9; i++) {
		for (j = 0; j < 9; j++) {
			ans[i][j] = multiply(i+1,j+1);
			printf("%4d", ans[i][j]);
		}
		printf("\n");
	}

	return 0;
}

int multiply(int a, int b) 
{
	return a * b;
}