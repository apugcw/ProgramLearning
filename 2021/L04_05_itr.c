/* 書かなくてよい / 自分もよくわかってないので説明中止 */

#include <stdio.h>

int main(void){
  int array[10] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
  int *head, *tail, *itr;
  head = array;
  tail = array + 10;

  for(itr = head; itr != tail; itr++) /* なんでこれchar型じゃないのに++で動くんや... */
    printf("%2d\n", *itr);

  return 0;
}
