#include<bits/stdc++.h>
#include <iostream>
using namespace std;

int main(){
  int y,m,d;

  char c1,c2;
  string ans = "Heisei";

  cin >>y>>c1>>m>>c2>>d;

  if(y > 2019){
    ans = "TBD";
  };
  if(m > 4){
    ans = "TBD";
  };
   cout <<ans<<endl;
  return 0;
  }
