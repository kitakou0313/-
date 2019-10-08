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
  vector<string> list;
  for(int i  = 0;i<N;i++){
      string s;
      cin >>s;
      list.push_back(s);

  }

  char befor = list[0][list[0].length()-1];

  for(int i  = 1;i<N;i++){
      bool flg = false;

    

      for(int j = 0;j<i;j++){
          if(list[i] == list[j])flg = true;
          
      }
      if(flg || befor != list[i][0]){
          cout <<"No"<<endl;
          return 0;
      }
      befor = list[i][list[i].length()-1];
  }

  cout <<"Yes"<<endl;

  

  return 0;
}