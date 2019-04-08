#include<bits/stdc++.h>
#include <iostream>
using namespace std;

int main(){

  int N;
  string s;
  int numR = 0,numB = 0;



  cin >>N>>s;

  for(int i = 0;i<N;i++){
    if(s[i] == 'R')numR++;
    else numB++;
  }


  if(numR > numB){
    cout <<"Yes"<<endl;
  }else cout <<"No"<<endl;


  return 0;
}
