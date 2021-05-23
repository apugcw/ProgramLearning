/* プログラミング講習会 */

#include <stdio.h>

int main(void){
  
  int counter;

  printf("count up");

  /* (初期化式; 条件式; 変化式) */
  for(counter = 0; counter < 10; counter++){
    /* 条件が真(True)のとき実行 */
    printf("%d\n", counter);
  }

  return 0;
}
