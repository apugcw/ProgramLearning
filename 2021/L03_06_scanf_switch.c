/* プログラミング講習会 */

#include <stdio.h>

int main(void){
  
  int input;
  
  /* 入力を変数に代入 */
  scanf("%d", &input);

  /* 変数が以下の時... */
  switch(input){
    case 0:
      /* input == 0 */
      printf("零\n");
    break;
    case 1:
      /* input == 1 */
      printf("壱\n");
    break;
    case 2:
      /* input == 2 */
      printf("弐\n");
    break;
    case 3:
      /* input == 3 */
    case 4:
      /* input == 4 */
    case 5:
      /* input == 5 */
      printf("3～5の間\n");
    break;
    default:
      /* inputが上記以外 */
      printf("それ以外\n");
    break;
  }

  return 0;
}
