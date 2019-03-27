#include<bits/stdc++.h>
#include <iostream>
using namespace std;

int main(){

  int A,B;
  string ans = "No";
  cin >>A>>B;

  for(int i = 1;i<=3;i++){
    if((A*B*i)%2 != 0){
      ans = "Yes";
    }

  }

  cout <<ans<<endl;
  return 0;
}
