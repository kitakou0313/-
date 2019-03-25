#include<bits/stdc++.h>
using namespace std;

int main(){
  int N, ans = 0;

  cin >>N;

  if(N >= 105){
    for (int i = 105; i <= N ;i++){
      int cnt = 0;
      if(i%2){
        for(int j = 1;j <= i;j++){
          if(!(i%j))cnt++;
        }
        if(cnt == 8)ans++;
      }
    }
  }

  cout <<ans<<endl;
  return 0;
}
