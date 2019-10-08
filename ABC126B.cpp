#include<bits/stdc++.h>
#include <iostream>
using namespace std;

int main(){
  string ans = "AMBIGUOUS";
  int S;

  cin >>S;

  if((S/100 > 12 && S%100 > 12) || ((S/100 > 12 && S%100 == 0)|| (S%100 > 12 && S/100 == 0) || (S%100 ==0 && S/100 == 0))){
      ans = "NA";
      cout <<ans<<endl;
      return 0;
  }
  if((S/100 > 12 || S/100 == 0) && S%100 <= 12 ){
      ans = "YYMM";
      cout <<ans<<endl;
  }
  if((S%100 > 12 || S%100 == 0)&& S/100 <= 12){
      ans = "MMYY";
      cout <<ans<<endl;
  }
  if(S%100 <= 12 && S/100 <= 12 && S/100 != 0 && S%100 != 0){
      ans = "AMBIGUOUS";
      cout <<ans<<endl;
  }
  return 0;
  }