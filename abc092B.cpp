#include<bits/stdc++.h>
using namespace std;

int main (){
  int N,D,X,A;
  int ans = 0;

  std::cin >> N>>D>>X;

  for (int i = 0 ; i < N ; i ++ ) {
    int day = 1;

    cin >> A;
    while  (day <= D){
      day = day + A;
      ans++;

    }
  }



  std::cout << ans+X<< '\n';

return 0;
  }
