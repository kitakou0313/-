#include<bits/stdc++.h>
#include <iostream>
using namespace std;

int main(){
  int N,Y;
  int list[] = {1000,5000,10000};

  cin >>N>>Y;

  for(int i = 0;i<=N;i++){
      for(int j = 0;j<=N-i;j++){
          if(list[0]*i+list[1]*j+list[2]*(N-i-j) == Y){
              cout <<N-i-j<<" "<<j<<" "<<i<<endl;
              return 0;
          }
      }
  }

  cout <<-1<<" "<<-1<<" "<<-1<<endl;
  return 0;
  }