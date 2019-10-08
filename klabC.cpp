#include<bits/stdc++.h>
#include <iostream>
using namespace std;

int main(){
  int N;
  int numB = 0,ans = 999999999;
  string S;
  int imo[99999] = {};
  

  cin >>N>>S;

  for(int i = 1; i<= N;i++){
      imo[i] = imo[i-1]+(S[i-1] == '.');
  }

  for(int i = 0; i < N-1; i++){
      if(S[i] == '#'){
        ans = min(imo[N]-imo[i+1]+numB,ans);
        numB++;
      }
  }
  
  ans = min(numB,ans);
  cout <<ans<<endl;
  return 0;
  }