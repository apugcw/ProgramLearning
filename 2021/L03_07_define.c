/* プログラミング講習会 */

#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/* defineでG/C/Pを0/1/2に変換 */
#define G 0
#define C 1
#define P 2

int main(void){
  
  /* じゃんけん */
  int cp, pl;

  /* rand初期化 */
  srand((unsigned int)time(NULL));

  printf("最初はグー、じゃんけん\n");

  while(1){
    /* プレイヤーの出す手を入力 */
    printf("0:グー, 1:チョキ, 2:パー > ");
    scanf("%d", &pl);

    /* プレイヤーが正しい入力をしているかチェック */
    if(pl < 0 || pl > 2){
      /* エラー表示 */
      printf("入力が正しくありません\n");
      return 255; /* エラー終了 */
    }

    /* コンピュータの出す手をrandで */
    cp = rand() % 3;
    printf("cp: %d\n", cp);

    /* 勝敗の決定 */
    if(cp == pl){
      /* あいこ */
      printf("あいこ\n");
      continue; /* 次のループへ */
    }
    if(
      (cp == G && pl == P) || /* cpがグー、plがパー */
      (cp == C && pl == G) || /* cpがチョキ、plがグー */
      (cp == P && pl == C)    /* cpがパー、plがチョキ */
      ){
      /* 勝ち */
      printf("あなたの勝ち\n");
    } else{
      /* 負け */
      printf("あなたの負け\n");
    }

    /* もう一度行うか */
    printf("もう一度じゃんけんをしますか？\n");
    printf("yes:1, no:0 > ");
    scanf("%d", &pl);
    if(pl == 1){
      printf("最初はグー、じゃんけん\n");
      continue;
    } /* 1の時はもう一回 */
    else break; /* 他は全部終わり */
  }

  return 0;
}
