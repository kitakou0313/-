#include <bits/stdc++.h>
using namespace std;
vector<string>v;
vector<int>ansl;
string s;
long long int ary[10001] = {0};
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
  int N;
  int ans = 0;
  int ind = 0;
  cin >>N;

  for(int i = 0;i<N;i++){
    long long int x;
    int now = 0;

    cin >>x;
    if(x%2==0){
      while(x%2 == 0){
        x /= 2;
        now++;
      }
    }
    ans += now;
  }


  cout <<ans<<endl;

  return 0;
}
