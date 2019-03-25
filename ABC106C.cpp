#include<bits/stdc++.h>
using namespace std;

int main(){
  string S;
  long long int K,NowInd = 0;
  int ans = 0;

  cin >>S>>K;

  for(int i = 0;i < min((long long int)S.size(),K);i++){
    if(S[i] != '1'){
      ans = i;
      break;
    }
  }
  cout <<S[ans]<<endl;
  return 0;
}
