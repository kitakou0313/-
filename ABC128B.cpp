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

  for(int i = 0; i< N;i++){
      string s;
      int p;
      cin >>s>>p;
      list.push_back(make_pair(s,p));
      copy.push_back(make_pair(s,p));
  }

  sort(list.begin(),list.end(),comp);

  for(int i = 0; i< N ; i++){
      for(int j = 0;j < N;j++){
          if(list[i].first == copy[j].first && list[i].second == copy[j].second){
              cout <<j+1<<endl;
          }

      }
  }

  return 0;
  }