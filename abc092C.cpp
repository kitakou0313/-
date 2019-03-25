#include<iostream>
#include<cstdlib>
using namespace std;

int main (){
  int N,i,sum = 0,ans;
  int dis[100001];

  std::cin >> N;
  dis[0] = 0;

  for (i = 1 ; i < N+1 ; i ++ ) {
    cin >> dis[i];
    }
    dis[N+1] = 0;
  for (i = 0; i < N+2;i++){
 sum = sum + abs(dis[i]-dis[i+1]);
  }
for (i = 1; i < N+1;i++ ){
  ans = sum + abs(dis[i-1]-dis[i+1])-(abs(dis[i-1]-dis[i])+abs(dis[i]-dis[i+1]));
cout << ans <<endl;
}

return 0;
  }
