#include<stdio.h>
#include<math.h>//math.hをインクルードして機能を増やす


int main() {
	double a;
	double b;
	double c;

	a = 5.0;
	b = 3.0;

	c = pow(a, b);//pow(a,b): a^b
	printf("a^b=%lf\n",c );
	//fabs(計算式):|計算式|
	printf("|a-b|=%lf\n", fabs(a - b));

	return 0;
	
}