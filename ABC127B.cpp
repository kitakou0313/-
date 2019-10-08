#include<bits/stdc++.h>
#include <iostream>
using namespace std;

int main(){
  int r,D,x_2000;

  cin >>r>>D>>x_2000;
  long long int x_n1 = x_2000;

  for(int i = 0;i<10;i++){
      long long int x_n = r*x_n1 - D;
      cout <<x_n<<endl;
      x_n1 = x_n;
  }
  return 0;
  }