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

int main(){
  int N;
  int list[300001] = {0};
  priority_queue<long long int,vector<long long int>, greater<long long int>> PQ;
  priority_queue<long long int> PQ1;

  long long int zenhanSum = 0;
  long long int kouhanSum = 0;

  long long int zenhanlist[100001] = {0};
  long long int kouhanlist[100001] = {0};

  cin >>N;

  for(int i = 0;i<3*N;i++){
      cin >>list[i];
      if(i < N){
          PQ.push(list[i]);
          zenhanSum+=list[i];
    }
        if(2*N<=i){
            PQ1.push(list[i]);
            kouhanSum+=list[i];
            }
  }
  
  zenhanlist[0] = zenhanSum;
  kouhanlist[0] = kouhanSum;

  long int ans = zenhanSum-kouhanSum;

  for(int k = N;k < 2*N;k++){
      if(PQ.top() < list[k]){
          zenhanSum -= PQ.top();
          PQ.pop();
          PQ.push(list[k]);
          zenhanSum += list[k];

      }
      zenhanlist[k-N+1] = zenhanSum;

      if(PQ1.top() > list[3*N-1-k]){
          kouhanSum -= PQ1.top();
          PQ1.pop();
          PQ1.push(list[3*N-1-k]);
          kouhanSum += list[3*N-1-k];
      }
      kouhanlist[k-N+1] = kouhanSum;
  }

  for(int i = 0;i<=N;i++){
      if(ans < zenhanlist[i]-kouhanlist[(N)-i])ans = zenhanlist[i]-kouhanlist[(N)-i];
  }
  cout <<ans<<endl;

  return 0;
}