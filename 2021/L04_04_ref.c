/* プログラミング講習会 */

#include <stdio.h>

/* 関数宣言 */
void swap(int *first, int *second);

int main(void){
  int a, b;
  a = 11;
  b = 21;

  printf("a: %d, b: %d\n", a, b);

  /* スワップ */
  swap(&a, &b);

  printf("a: %d, b: %d\n", a, b);

  return 0;
}

/* 関数定義 */
void swap(int *first, int *second){
  int temp;
  temp = *first;
  *first = *second;
  *second = temp;
}
