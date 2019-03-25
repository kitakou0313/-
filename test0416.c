#include <stdio.h>

#define DATA_LIM 8

int main(void) {
	/* データを保存する配列 */
	double data[DATA_LIM] = { 1.0, 3.0, 5.0, 7.0, 9.0, 11.5, 13.0, 15.0};
	int flag ;		/* 1 であれば等差数列 */
	/* 等差数列であるか判定 ここから */
	int i = 0;
	flag = 1;
	while (i++ < DATA_LIM-2) {
    	if (data[i]-data[i-1] != data[i+1]-data[i]) {
				flag = 0;
				break;
    	}
		}
	/* 等差数列であるか判定 ここまで */


	/* 出力 */
	if (flag) {
		printf("Ok\n") ; /*改行コードで文字化けが起きていたので変更しました*/
	} else {
		printf("NG\n") ;
	} ;

	return 0 ;
}
