#include<bits/stdc++.h>
using namespace std;


int main(){
  int X1,X2,Y1,Y2;

  cin >>X1>>Y1>>X2>>Y2;
  int desx = X2-X1, desy = Y2-Y1;

  cout << X2 - desy<<' '<<Y2 + desx<<' '<<X2 - desy-desx<<' '<<Y2 + desx -desy<<endl;

  return 0;
}
