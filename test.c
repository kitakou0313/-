#include <stdio.h>



#define LIMIT_LOW 0

#define LIMIT_HIGH 25



int main(void) {

  int max, min ;

  int temp;

  /* 必要であれば，ここに変数を追加 */



  scanf("%d", &temp);

  max = temp;

  min = temp;

  while ( (LIMIT_LOW <= temp) && (temp <= LIMIT_HIGH)) {

    /* ここに処理を記述 */

    if(temp > max){

        max = temp;

    }else if(min > temp){

        min = temp;



    }



    scanf("%d", &temp);

  }





  printf("MAX = %d\n", max) ;

  printf("MIN = %d\n", min) ;



  return 0 ;

}
