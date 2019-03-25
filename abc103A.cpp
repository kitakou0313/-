#include<bits/stdc++.h>
using namespace std;

int main(){
  int Max = -1,Min = 101;

  for(int i = 0; i< 3; i++){
    int x;
    cin >> x;
    Max = max(x,Max);
    Min = min(Min, x);
  }

  cout <<abs(Max - Min)<<endl;;
}
