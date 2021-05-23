/* プログラミング講習会 */

#include <stdio.h>

/* 乱数を利用するため */
#include <stdlib.h>

/* 乱数の初期化用 */
#include <time.h>

int main(void){

  int random;
  double random_d;

  /* 乱数の初期化 */
  srand((unsigned int)time(NULL));

  /* 乱数の出力 */
  random = rand();
  printf("rand: %d\n", random);

  /* 乱数で0.8以上が出るまで終われま10 */
  do{
    random = rand();
    random_d = (double)(random % 10000) / (double)10000;
    printf("value: %.4f\n", random_d);
  } while(random_d < 0.8);
  /* 条件が真(True)ならdo以下へループ */

  /* 注意：通常こんな終わらない確率のあるプログラムは作ってはいけない */

  return 0;
}
