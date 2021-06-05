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
  Character character;

  /* 値の代入 */
  strcpy(character.name, "主人公"); /* 文字列の代入 */
  character.hp = 72;
  character.atk = 68;
  character.def = 91;

  /* 値の参照 */
  printf("name: %s\n", character.name);
  printf("hp  : %2d\n", character.hp);
  printf("atk : %2d\n", character.atk);
  printf("def : %2d\n", character.def);

  return 0;
}
