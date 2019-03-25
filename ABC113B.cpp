#include<bits/stdc++.h>
using namespace std;

int main(){
  float nlist[1002] = {0};
  int N,T,A;
  int ansind = 0;

  cin >>N>>T>>A;

  for(int i = 0; i<N;i++){
    int H;

    cin >>H;
    nlist[i] = T-0.006*H;
  }



  float dist = 99999999;

  for(int i = 0; i<N;i++){
    if (abs(nlist[i] - A) < dist){
      ansind = i;
      dist = abs(nlist[i] - A);
    }
  }

  cout <<ansind+1<<endl;
  return 0;
}
