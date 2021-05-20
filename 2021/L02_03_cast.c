/* プログラミング講習会 */

#include <stdio.h>

int main(void){

  /* 実数型(倍精度浮動小数) */
  double number = 1.41421356; /* =を使って最初から値を代入 => 初期化 */

  /* 整数型 */
  int integer;

  /* 明示的な変数の変換(キャスト) */
  integer = (int)number;

  printf("float: %f, int: %d", number, integer);

  return 0;
}