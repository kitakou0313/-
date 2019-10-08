#include<bits/stdc++.h>
#include <iostream>
using namespace std;

int main(){
  int A,B;
  int ans = 0;

  cin >>A>>B;

  if(A > B)ans = max(A,B) + max(A-1,B);
  else ans = max(A,B) + max(A,B-1);

  
  cout <<ans<<endl;
  

  return 0;
  }