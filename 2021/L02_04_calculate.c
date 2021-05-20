/* プログラミング講習会 */

#include <stdio.h>

int main(void){
  /*  */
  int a = 6;
  int b = 5;
  int ans;
  double ans_d;

  printf("a: %d, b: %d\n", a, b);

  /* 足し算 */
  ans = a + b;
  printf("a + b = %d\n", ans);

  /* 引き算 */
  ans = a - b;
  printf("a - b = %d\n", ans);

  /* かけ算 */
  ans = a * b;
  printf("a * b = %d\n", ans);

  /* 割り算 int/int=int */
  ans = a / b;
  printf("a / b = %d(int)\n", ans);

  /* 割り算 int/int=double */
  ans_d = a / b;
  printf("a / b = %f(int/int=double)\n", ans_d);

  /* 割り算 double/double=double */
  ans_d = (double)a / (double)b;
  printf("a / b = %f(double/double=double)\n", ans_d);

  /* 割った余り(剰余) */
  ans = a % 2;
  printf("a %% 2 = %d\n", ans);

  return 0;
}