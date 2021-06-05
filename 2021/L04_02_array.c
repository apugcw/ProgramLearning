/* プログラミング講習会 */

#include <time.h>
#include <stdio.h>
#include <stdlib.h>


#define MAX_ENEMY_NUM 6
#define MAX_FRIEND_NUM 6

int main(void){
  int cnt; /* ループカウンタ */

  /* ステータス/ダメージ設定 */
  int dmgs[MAX_FRIEND_NUM * 2] = {55, 25, 45, 23, 50, 59, 25, 46, 59, 33, 25, 61};
  int targets[MAX_ENEMY_NUM * 2] = {0, 3, 1, 1, 1, 5, 5, 2, 4, 3, 2, 2};
  int enemy_hps[MAX_ENEMY_NUM] = {120, 105, 80, 75, 35, 25};

  /* 初期HP表示 */
  printf("\n----- before battle -----\n");
  for(cnt = 0; cnt < MAX_ENEMY_NUM; cnt++)
    printf("enemy[%d] hp: %3d\n", cnt, enemy_hps[cnt]);
  printf("\n");

  /* ダメージ処理 */
  printf("----- battle -----\n");
  for(cnt = 0; cnt < MAX_FRIEND_NUM * 2; cnt++){
    int hp_before, hp_after;
    if(enemy_hps[targets[cnt]] == 0){
      /* 既に敵のHPが0のとき */
      printf("attack: friend[%d] => enemy[%d], hp: %3d\n", cnt % 6, targets[cnt], 0);
      continue;
    }
    hp_before = enemy_hps[targets[cnt]];
    enemy_hps[targets[cnt]] -= dmgs[cnt]; /* ダメージ値をHPから引く */
    if(enemy_hps[targets[cnt]] < 0) enemy_hps[targets[cnt]] = 0; /* HPが負の値になった時に0に戻す */
    hp_after = enemy_hps[targets[cnt]];
    printf("attack: friend[%d] => enemy[%d], hp: %3d -> %3d (%2ddmg)\n", cnt % 6, targets[cnt], hp_before, hp_after, dmgs[cnt]);
  }
  printf("\n");

  /* バトル後HP表示 */
  printf("----- after battle -----\n");
  for(cnt = 0; cnt < MAX_ENEMY_NUM; cnt++)
    printf("enemy[%d] hp: %3d\n", cnt, enemy_hps[cnt]);
  printf("\n");

  return 0;
}
