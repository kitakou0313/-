#include <iostream>
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define MAXSIZE 10000000

bool comp(const pair<int,int> a, const pair<int,int> b) {
    return a.second < b.second;
}

int N;

int edge[10001][10001] ={-1};
int node[10001] = {0};
int visi[10001] = {0};

void dfs(int u){
    visi[u] = 1;

    for(int i = 1;i<=N;i++){
        if(edge[u][i] == -1)continue;
        if(visi[i])continue;
        node[i] = (node[u] + edge[u][i])%2;
        dfs(i);
    }

}

int Dx[6] = { 0, 0, 1, 1,-1,-1};
int Dy[6] = { 1,-1, 1, 0, 0,-1};

//priority_queue<long long int,vector<long long int>, greater<long long int>> PQ;
//priority_queue<long long int> PQ1;
int main(){

  cin >>N;

  for(int i = 1;i<=N;i++){
      for(int j = 1;j<=N;j++){
          edge[i][j] = -1;
      }
  }

  for(int i = 0;i < N-1;i++){
      int u,v,w;
      cin >>u>>v>>w;
      edge[u][v] = w%2;
      edge[v][u] = w%2;
  }

  node[1] = 1;
  dfs(1);

  for(int i = 1;i<=N;i++){
      if(node[i])cout <<'1'<<endl;
      else cout <<'0'<<endl;
  }
  return 0;
}

/*Syakutori
while(cin >>b && b)){
      ll t = 1;
      long long int ansS = 1,ansT=0;
      long long int sum = 0;

      for(ll s = 1;s < 50000000;s++){

        while(t <  50000000 && sum+Rsum[t] < b){
          sum += Rsum[t];
          t++;
        }
        if(b == sum+Rsum[t]){
          if(ansT - ansS < t-s){
            ansS = s;
            ansT = t;
          }
          cout <<ansS<<" "<<ansT-ansS + 1<<endl;
          break;
        }
        if(t == s)++t;
        else sum -= Rsum[s];
        }
    }
Full class double
printf("%.16f\n",ans);
*/