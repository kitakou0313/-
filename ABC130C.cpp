#include <iostream>
#include<bits/stdc++.h>
using namespace std;

bool comp(const pair<string,int> a, const pair<string,int> b) {
  if (a.first != b.first)
    return a.first < b.first; // 高い順に並べたいので演算子を逆に
  else{
      return a.second > b.second;
  }
}

priority_queue<long long int,vector<long long int>, greater<long long int>> PQ;
priority_queue<long long int> PQ1;

long long int dp[100001] = {0};
long long int hole[100001] = {0};


int main(){
  int N,M;
  cin >>N>>M;

  for(int i = 0;i<M;i++){
      int x;
      cin >>x;
      hole[x] = 1;
  }
  dp[0] = 1;

  for(int i = 0;i<N;i++){
      if(hole[i+1] != 1){
          dp[i+1] += dp[i];
          dp[i+1] = dp[i+1]%((int)(1e9+7));
      }
      if(hole[i+2] != 1){
          dp[i+2] += dp[i];
          dp[i+2] = dp[i+2]%((int)(1e9+7));
      }
}

cout <<dp[N]<<endl;




  return 0;
}