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
  int P,Q,R;
  vector<int> list;

  for(int i = 0;i<3;i++){
    int x;
    cin >>x;
    list.push_back(x);
  }

  sort(list.begin(),list.end());
  cout <<list[0]+list[1]<<endl;


  return 0;
}