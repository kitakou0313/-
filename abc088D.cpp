#include<bits/stdc++.h>
#include <iostream>
using namespace std;

int main(){
  char c[51][51];
  int numG[51][51] = {0};
  int ans = -1;

  int H,W,numW = 0;

  queue<pair<int,int> > Q;

  cin >>H>>W;

  for(int i = 0; i<H;i++){
      string s;
      cin >>s;
      for(int j = 0;j<W;j++){
          if(s[j] =='.')numW++;
          c[i][j] = s[j];
      }
  }

  numG[0][0] = 1;

  Q.push(make_pair(0,0));

  while(!Q.empty()){
      int d_x[] = {1,0,0,-1};
      int d_y[]= {0,-1,1,0};

      pair<int,int> cur = Q.front();
      Q.pop();

      for(int i = 0;i<4;i++){
          int newX = cur.first + d_x[i];
          int newY = cur.second + d_y[i];
          if(c[newX][newY] == '.' && numG[newX][newY] == 0 && newX >= 0 && newY >= 0 && newX < H && newY < W){
              numG[newX][newY] = numG[cur.first][cur.second] + 1;
              Q.push(make_pair(newX,newY));
        }   
      }
  }

  if(numG[H-1][W-1] == 0){
      cout <<-1<<endl;
  }else{
    cout <<-(numG[H-1][W-1]-numW)<<endl;
  }

  return 0;
  }