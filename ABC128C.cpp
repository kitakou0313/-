#include<bits/stdc++.h>
#include <iostream>
using namespace std;

int main(){
  int N,M;
  int s[11][11] = {0};
  int p[11];

  cin >>N>>M;

  for(int i = 0; i < M;i++){
      int k = 0;
      cin >>k;
      for(int j = 0;j < k;j++){
          cin >>s[i][j];
      }
  }
  for(int i = 0; i < M;i++){
      cin >>p[i];
  }

  int ans = 0;
  
  for (int i = 0;i < pow(2,N);i++){
      int verNum = 0;
      bitset<10>sw(i);
      for(int j = 0;j < M;j++){
          int k = 0;
          int a = 0;
          while (s[j][k] != 0){
              if(sw[s[j][k]-1])a++;
              k++;
          }
          if(a%2 == p[j]){
              verNum++;
          }
      }
      if(verNum == M)ans++;

  }
  cout <<ans<<endl;
  return 0;
  }