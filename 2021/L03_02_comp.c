/* プログラミング講習会 */

#include <stdio.h>

int main(void){
  
  /* ここを変更して処理を確認 */
  int number = 12;

  if(number < 12){
    printf("numberは12未満\n");
  }

  if(number <= 12){
    printf("numberは12以下\n");
  }

  if(number == 12){
    printf("numberは12\n");
  }

  if(number != 12){
    printf("numberは12ではない\n");
  }

  if(number >= 12){
    printf("numberは12以上\n");
  }

  if(number > 12){
    printf("numberは12よりも大きい\n");
  }

  if(number >= 12 && number <= 12){
    printf("numberは12以下かつ12以上\n");
  }

  if(number < 12 && number > 12){
    printf("numberは12未満または12より大きい\n");
  }

  if(!(number <= 12)){
    printf("numberは12以下ではない\n");
  }

  return 0;
}