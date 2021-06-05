/* 書かなくていい */

#include <stdio.h>

int main(void){
  
  int number = 11; /* 変数 */
  int *ptr; /* intのポインタを格納する変数 */

  printf("%d\n", number); /* 変数の値 */
  printf("%p\n", &number); /* ポインタ番号 */

  ptr = &number;

  printf("%p\n", ptr);
  printf("%d\n", *ptr);

  return 0;
}