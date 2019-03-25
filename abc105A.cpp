#include<bits/stdc++.h>
using namespace std;

long int score[11][2];
int main(){
  int N;
  int k = -2;
  string ans = "";

  cin >>N;

  if(N % 2 == 0){
    ans = "0";
  }
  else {
    ans = "1";
    N--;
  }

  N /= -2;

  while(N != 0){
    if(N%-2 < 0)ans = to_string(11)+ans;
    else ans = to_string(N % -2)+ans;
    N /= -2;
  }
  cout <<ans<<endl;
  return 0;
}
