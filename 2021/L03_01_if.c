/* プログラミング講習会 */

#include <stdio.h>

int main(void){
  
  /* ここを変更してみてif文のどちらが実行されるのか確認 */
  int number = 12;

  /* 条件にしたがって分岐 */
  if(number == 11){
    /* 条件が真(True)のとき */
    printf("number is 11\n");
  } else{
    /* 条件が偽(False)のとき */
    printf("number is not 11\n");
  }

  return 0;
}