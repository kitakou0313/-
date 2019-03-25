#include<bits/stdc++.h>
using namespace std;

int main(){

  string N;
  int ans = 0;

  cin >>N;

  for(int i = 0;i < 4;i++){
    if(N[i] == '2')ans++;
  }
  cout <<ans<<endl;
  return 0;
}
