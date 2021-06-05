/* プログラミング講習会 */

#include <stdio.h>

/* strcpyを使うのに必要 */
#include <string.h>

/* 構造体の定義 */
struct _TAG_Character{
  char name[256];
  int hp;
  int atk;
  int def;
};
/* 構造体に別名を設定 */
typedef struct _TAG_Character Character;

int main(void){
  /* 自分の作った構造体型で変数を宣言 */
  Character tkr;

  /* 値の代入 */
  strcpy(tkr.name, "主人公"); /* 文字列の代入 */
  tkr.hp = 72;
  tkr.atk = 68;
  tkr.def = 91;

  /* 値の参照 */
  printf("name: %s\n", tkr.name);
  printf("hp  : %2d\n", tkr.hp);
  printf("atk : %2d\n", tkr.atk);
  printf("def : %2d\n", tkr.def);

  return 0;
}
