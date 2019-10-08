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
  int N,A,B,C;

  cin >>N>>A>>B>>C;
  
  return 0;
  }