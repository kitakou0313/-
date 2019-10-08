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
  string s;

  cin >>s;
  int wnum = 0;

  for(int i = 0;i<(int)s.length();i++){
    if('o' == s[i])wnum++;
  }

  if((8 -wnum) > (15-(int)s.length()))cout <<"NO"<<endl;
  else cout <<"YES"<<endl;

  return 0;
  }