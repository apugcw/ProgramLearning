#include<stdio.h>

int main()
{
	int a;
	int b;
	int anc;

	//“ü—Í
	printf("a=");
	scanf_s("%d", &a);
	printf("b=");
	scanf_s("%d", &b);

	//‘«‚µŽZ
	anc = a + b;
	printf("%d+%d=%d\n", a, b, anc);
	//ˆø‚«ŽZ
	anc = a - b;
	printf("%d-%d=%d\n", a, b, anc);
	//Š|‚¯ŽZ
	anc = a * b;
	printf("%d*%d=%d\n", a, b, anc);
	//Š„‚èŽZ
	anc = a / b;
	printf("%d/%d=%d\n", a, b, anc);
	//‚ ‚Ü‚è
	anc = a % b;
	printf("%d%%%d=%d\n", a, b, anc);

	return 0;
}