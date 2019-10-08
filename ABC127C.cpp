#include<bits/stdc++.h>
#include <iostream>
using namespace std;

int main(){
  int N,M;

  cin >>N>>M;
  int LMAX = -1;
  int RMIN = 1000000; 

  for(int i = 0; i< M;i++){
      int L,R;
      cin >>L>>R;

      if((RMIN < L)||(LMAX > R)){
          cout <<0<<endl;
          return 0;

      }

      if(LMAX < L)LMAX = L;
      if(RMIN > R)RMIN = R;


  }
  cout <<(RMIN-LMAX+1)<<endl;
  return 0;
  }