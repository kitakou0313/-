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

int main(){
  int N;
  cin >>N;
  vector<int> list;
  for(int i  = 0;i<N;i++){
      int w;
      cin >>w;
      list.push_back(w);
  }

  int ans = 999999999;

  for(int i = 1; i< N;i++){
    int l = 0;
    int r = 0;
    for(int j = 0;j<i;j++){
       l += list[j];
    }
    for(int j = i;j<N;j++){
       r += list[j];
    }
    if(ans > abs(l-r))ans =abs(l-r);
  }

  cout <<ans<<endl;
  return 0;
}