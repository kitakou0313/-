#include <bits/stdc++.h>
using namespace std;
#include <iostream>
/*cout <<"Debug"
cout <<x-30<<' '<<y-30<<endl;*/


/*
void dfs(int x,int y,int lpcnt){
  mp[x][y] = 1;
  cout <<"Debug ";
  cout <<x-30<<' '<<y-30<<endl;
  cnt++;
  lpcnt++;
  int watasi = lpcnt;
  int used[6] = {0};
  for(int dx = 0;dx<6;dx++){
    int nx = x+d_x[dx],ny = y+d_y[dx];
    int dft = sqrt((nx-30)*(nx-30)+(ny-30)*(ny-30));
    if((dft<=30)&&(watasi < t)&&(mp[nx][ny] == 0)){
        dfs(nx,ny,watasi);
        used[dx] = 1;
    }
    for(int i = 0;i<6;i++){
      if(used[i]){
        if((nx == x + d_x[i])&&(ny == y + d_y[i])){
          dfs(nx,ny,watasi);
        }
      }
    }
    }
}
memset(ary,0,sizeof(ary)/sizeof(ary[0]))
*/
vector<string>ansl;
string s;
int ary[10001][1300] = {0};
int lst[200][200];
int cnt = 0;
int d_x[] = {1, 1, 0, -1, -1, 0};
int d_y[] = {1, 0, -1, -1, 0, 1};
int main(){
  int N,M;
  cin >>N>>M;
  while((N != 0)&&(M != 0)){
    int r,q;
    memset(ary,0,sizeof(ary)/sizeof(ary[0]))

    cin >>r;
    for(int i = 0;i < r ; i++){
      int t,n,m,s;
      cin >>t>>n>>m>>s;
      if(s == 1){
        ary[m][t]++;
      }else{
        ary[m][t]--;
      }
    }
    for(int i = 0; i < 10000; i++){
      for(int j = 0; j < 1299; j++){
        ary[i][j+1] += ary[i][j+1]+ary[i][j];
      }
    }

    cin >>N>>M;
  }


  return 0;
}
