#include <stdio.h> 

#define MONTHS 12 //MONTHSを12に置き換える

int main() 
{
	// MONTHS個の要素を持つ配列day
	int day[MONTHS] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 }; 

	int input;
	
	printf("今日は何月ですか? >"); 

	scanf_s("%d", &input); 

	if (input >= 1 && input <= 12) {
		printf("今月は %d日までですね\n", day[input - 1]);
	}
	else {
		printf("それは知らない月です\n");
	}

	return 0; 
}