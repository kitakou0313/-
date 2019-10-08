#include<bits/stdc++.h>
#include <iostream>
using namespace std;

int main(){
  int N;
  int ans = 0;
  int Nlist[21] = {0};
  int Clist[21] = {0};

  cin >>N;


  for(int i = 0; i<N;i++){
    cin >>Nlist[i];
  }

  for(int i = 0; i<N;i++){
    cin >>Clist[i];
  }

  for(int i = 0; i<N;i++){
    if(Nlist[i]-Clist[i] > 0)ans+=Nlist[i]-Clist[i];
  }
  cout <<ans<<endl;

  return 0;
  }