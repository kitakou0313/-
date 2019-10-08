#include<bits/stdc++.h>
#include <iostream>
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
  vector<pair<string,int>> list;
  vector<pair<string,int>> copy;

  cin >>N;

  cout <<(N-2)*180<<endl;

  return 0;
  }