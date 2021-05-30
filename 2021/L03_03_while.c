/* プログラミング講習会 */

#include <stdio.h>

int main(void){
  
  int counter = 10;

  printf("count down\n");

  while(1){
    /* 条件が真(True)の時に以下を実行 */
    /* breakはループを脱出する */
    if(counter < 0) break;
    printf("%d\n", counter);
    counter = counter - 1;
  }
  
  return 0;
}
