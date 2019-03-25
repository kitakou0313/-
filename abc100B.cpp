#include <bits/stdc++.h>
using namespace std;
vector<string>v;
vector<int>ansl;
string s;
int ary[100005] = {0};
int mp[51][51];
int cnt = 0;
int d_x[] = {0,1,0,-1};
int d_y[] = {1,0,-1,0};
int W,H;

void dfs(int x,int y){
  mp[y][x] = 0;
  for(int dx = -1;dx<2;dx++){
    for(int dy = -1;dy<2;dy++){
    int nx = x+dx,ny = y+dy;
    if((nx>=0)&&(ny>=0)&&(ny<H)&&(nx<W)&&(mp[ny][nx] == 1)){
      dfs(nx,ny);
    }
  }
}
}
int main(){
  int D,N;
  long long int ans;
  cin >>D>>N;

  if(D == 0){
    ans = 1;
    for(int i = 1;i<N;i++){
      ans++;
    }
    if(N ==100){
      ans++;
    }
  }
  if(D == 1){
    ans = 100;
    for(int i = 1;i<N;i++){
      ans += 100;
    }
    if(N==100){
      ans += 100;
    }
  }if(D == 2){
    ans = 10000;
    for(int i = 1;i<N;i++){
      ans += 10000;
    }
    if(N==100){
      ans += 10000;
    }
  }
  cout <<ans<<endl;

  return 0;
}
