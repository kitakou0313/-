#include <bits/stdc++.h>
using namespace std;

int main(){
  long int n,m,d;
  float ans;
  long int sum;
  cin >>n>>m>>d;
  if(d == 0)d = 1;
  ans = ((n-1)/d)*pow(2,m)/pow(n,m);
  cout <<ans<<endl;
  return 0;
}
