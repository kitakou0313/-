#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define MAXSIZE 10000000;

const int MAX = 510000;
const int MOD = 1000000007;
const long long INF = 1LL << 60;

ll dp[100001][101] = {0};

int main()
{
  int N, W;
  int w[101];
  int v[101];

  cin >> N >> W;

  for (int i = 0; i < N; i++)
  {
    cin >> w[i] >> v[i];
  }

  for (int i = 0; i < 100001; i++)
  {
    for (int j = 0; j < 101; j++)
    {
      dp[i][j] = INF;
    }
  }

  dp[0][0] = 0;

  for (int i = 0; i <= 100000; i++)
  {
    for (int j = 0; j < N; j++)
    {
      if (i >= v[j])
        dp[i][j + 1] = min(dp[i][j], dp[i - v[j]][j] + w[j]);
      else
        dp[i][j + 1] = dp[i][j];
    }
  }

  ll ans = -1;

  for (int v = 0; v <= 100000; v++)
  {
    if (dp[v][N] <= W)
    {
      ans = v;
    }
  }
  cout << ans << endl;

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
