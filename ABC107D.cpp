#include<bits/stdc++.h>
using namespace std;

int main(){
  int N,M,Q;
  int list[502][502] = {0};
  int ruiseki[502][502] = {0};

  cin >>N>>M>>Q;

  for(int i = 0;i < M;i++){
    int x,y;
    cin >>x>>y;
    list[x][y]++;
  }


  for(int i = 0;i<=N;i++){
    for(int j = 1;j <= N;j++){
      ruiseki[i][j] = list[i][j]+ruiseki[i][j-1];
    }
  }

  for(int i= 0;i<Q;i++){
    int L,R,sum = 0;cin >>L>>R;
    for(int j = L;j<=R;j++){
      sum += ruiseki[j][R]-ruiseki[j][L-1];
    }
    cout <<sum<<endl;
  }

  return 0;
}
