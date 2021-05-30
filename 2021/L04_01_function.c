/* プログラミング講習会 */

#include <time.h>
#include <stdio.h>
#include <stdlib.h>

#define ATK_CAP (int)100

/* ----- 関数宣言 ----- */
/*
  calcDamage(int atk, int def)
  - atk 攻撃力
  - def 防御力
*/
int calcDamage(int atk, int def);

/* main関数も関数の一種 */
int main(void){

  int atk, def;

  /* init rand */
  srand((unsigned int)time(NULL));

  printf("攻撃力 > ");
  scanf("%d", &atk);
  printf("防御力 > ");
  scanf("%d", &def);

  printf("ダメージ > %d", calcDamage(atk, def));
  return 0;
}

/* ----- 関数定義 ----- */
int calcDamage(int atk, int def){
  double dmg = 0.0, atk_in, def_in;

  /* 回避の発生 (8割で回避) */
  if((rand() % 10000) <= 8000){
    /* 回避失敗 */
    def_in = def * 0.5 + (double)(rand() % def) * 0.6;
    if(atk > ATK_CAP)
      atk_in = (double)ATK_CAP + (double)(atk - ATK_CAP) / 4.0;
    else atk_in = (double)atk;
    /* クリティカルの発生 (5%でクリティカル) */
    if((rand() % 100) <= 5){
      /* クリティカル */
      printf("critical!\n");
      atk_in *= 1.5;
    }
    dmg = atk_in - def_in;

    if(dmg < 20.0){
      /* 割合ダメージ */
      printf("shave damage\n");
      dmg = 6 + ((double)(rand() % 100) * 0.08);
    }
  }

  return (int)dmg;
}
