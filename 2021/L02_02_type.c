/* gcw プログラミング講習会 */

#include <stdio.h>

int main(void){
  /* 整数型 */
  int integer;

  /* 実数型 */
  float f_number;
  double d_number;

  /* 文字型 */
  char character;

  /* それぞれ値の代入 */
  integer = 11;
  f_number = 3.1415926535897932384626;
  d_number = 3.1415926535897932384626;
  character = 'b';

  /* それぞれ対応したフォーマット指定子で出力 */
  printf("%d\n", integer);
  printf("%f\n", f_number);
  printf("%f\n", d_number);
  printf("%c\n", character);

  return 0;
}

