#include <iostream>
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define MAXSIZE 10000000;

const int MAX = 510000;
const int MOD = 1000000007;
const long long INF = 1LL << 60;

const ll MAXINDx = 3000;
const ll MAXINDy = 3000;


float dp[MAXINDx][MAXINDy] = {0};

vector<vector<int>> edges;
/*
int rec(int v){
    int res = 0;

    if(dp[v] > -1)return dp[v];

    for(auto nv: edges[v]){
        res = max(res, rec(nv) + 1);
    }
    return dp[v] = res;
}
*/
int main(){
    int N;

    cin >>N;

    float p[MAXINDx] = {0};

    for(int i = 0; i < N; i++){
      cin >>p[i];
    }

    for(int i = 0; i < MAXINDx; i ++){
      dp[0][i] = 1.0;
    }

    dp[0][0] = 1.0;

    for(int j = 0; j < N; j++){
      dp[j+1][0] += dp[j][0]*p[j];
    }

    for(int i = 0; i <= N; i++){
      for(int j = 0; j <= i; j++){
        dp[i+1][j+1] = dp[i][j]*p[i] + dp[i][j+1]*(1-p[i]);
      }
    }
    float ans = 0;

    for(int i = (N+1)/2 ; i <= N; i++){
      ans += dp[N][j];
    }

    cin <<ans<<endl;

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

//priority_queue<long long int,vector<long long int>, greater<long long int>> PQ;
//priority_queue<long long int> PQ1;

bool comp(const pair<int,int> a, const pair<int,int> b) {
    return a.second < b.second;
}

ll gcd(ll a,ll b){
  if(a%b == 0){
    return b;
  }else{
    return gcd(b,a%b);
  }
}
*/
