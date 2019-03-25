#include <stdio.h>
#define N 4

int main(void) {
  int u[N] ;
  int i;
  /* ここに変数を追加 */
  int cnt0 = 0;
  int cnt1 = 0;

  for (i = 0 ; i < N ; i++) {
    scanf("%d", &(u[i])) ;
  }

  /* ここに判定処理を記述 */

  /* 例えば */
  for(i=0;i < N; i++ ){
        if(1 == u[i]){
            cnt1++;
        }else if(0 == u[i]){
            cnt0++;
        }
    }
    if(cnt0 == 1){
        for(i=0;i < N; i++ ){
            if(0 == u[i])
            printf("%d\n", i+1);
        }
    }else if (cnt1 == 1){
        for(i=0;i < N; i++ ){
            if(1 == u[i])
            printf("%d\n",i+1);
        }
    }else{
        printf("0\n");
    }

  return 0 ;
}
