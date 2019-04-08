#include<bits/stdc++.h>
#include <iostream>
using namespace std;

int main(){
  long long int N;
  long long int min = 999999999999999999; 

  cin >>N;

  for(int i = 0;i<5;i++){
      long long int x;
      cin >>x;
      if(min > x)min = x;
  }
  cout <<4 +(N%min != 0)+((N) / min)<<endl;
  return 0;
  }