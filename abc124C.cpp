#include<bits/stdc++.h>
#include <iostream>
using namespace std;

int main(){
  string s;
  int numB = 0;
  int numW = 0;
  int ans = 0;

  cin >>s;

  for(int i = 0; i < (int)(s.length()) ;i++){
      if(i%2 == 0){
          if(s[i] != '0')numB++;
      }else{
          if(s[i] != '1')numB++;
      }
  }

  for(int i = 0; i < (int)(s.length()) ;i++){
      if(i%2 == 0){
          if(s[i] != '1')numW++;
      }else{
          if(s[i] != '0')numW++;
      }
  }

  

  

    ans = min(numW,numB);
    cout <<ans<<endl;

  
  return 0;
  }