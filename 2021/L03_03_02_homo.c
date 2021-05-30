#include <stdio.h>

int main(void){
  char input[2];
  while(1){
    printf("あなたはホモですか？ (y/n) > ");
    scanf("%s", input);
    if(input[0] == 'y' || input[0] == 'Y') break;
    if(input[0] == 'n' || input[0] == 'N')
      printf("ホモは嘘つき\n");
    else printf("あのさぁ・・・\n");
  }
  printf("やっぱりホモじゃないか！（歓喜）");
  return 0;
}