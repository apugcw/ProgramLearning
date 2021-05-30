#include <stdio.h>

int main(){
  char ans;

  while(1){
    printf("tkrについていきますか？ > ");
    scanf("%c", &ans);
    if(ans == 'y') break;
  }

  return 0;
}