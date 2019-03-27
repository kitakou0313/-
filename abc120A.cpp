#include<bits/stdc++.h>
using namespace std;

int main(){

  int A,B;
  string ans = "Yes";
  cin >>A>>B;

  for(int i = 1;i<=3;i++){
    if((A*B*i)%2 == 0){
      ans = "No";
    }

  }

  cout <<ans<<endl;
  return 0;
}
