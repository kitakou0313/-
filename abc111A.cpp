#include<bits/stdc++.h>
#include <iostream>
using namespace std;

int main(){
  string n;

  cin >>n;

  for(int i = 0;i < n.length();i++){
    if(n[i] == '1')cout <<'9';
    else if(n[i] == '9')cout <<'1';
  }
  return 0;
}
