#include <bits/stdc++.h>
using namespace std;

#define MAX_LEN  (int)(5000000)
int ruiseki[MAX_LEN+2] = {0};

int main(){
  for(int i = 1; i <= MAX_LEN+1; i++){
    ruiseki[i] = ruiseki[i-1] + i;
  }

  long int b;
  cin >>b;

  while(b!=0){
    int flag = 1;
    int A,B;

    for(long int i = 0; i <=  b/2 +1; i++){
      for(long int j = i; j <= b/2+2; j++){
        if(ruiseki[j] - ruiseki[i] == b){
          A = i + 1;
          B = j - i;
          flag = 0;
          cout <<A<<' '<<B<<endl;
        }else if (ruiseki[j] - ruiseki[i] > b)break;
        if(flag == 0)break;
      }
    }
    if(flag)cout <<b<<' '<<1<<endl;
    cin >>b;
  }
  return 0;
}
