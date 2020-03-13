#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define MAXSIZE 10000000;

const int MAX = 510000;
const int MOD = 1000000007;
const long long INF = 1LL << 60;

const ll MAXINDx = 3000;
const ll MAXINDy = 3000;

double dp[MAXINDx][MAXINDy] = {0};

vector<vector<int>> edges;

ll R, B, x, y;

bool check(ll mid)
{
    if (mid > R || mid > B)
        return false;
    ll num = (R - mid) / (x - 1) + (B - mid) / (y - 1);
    return (num >= mid);
}

bool comp(const pair<int, int> a, const pair<int, int> b)
{
    return a.second < b.second;
}

int main()
{
    int N, M;
    map<string, int> bt;

    cin >> N;
    for (int i = 0; i < N; i++)
    {
        string s;
        cin >> s;
        bt[s]++;
    }
    cin >> M;
    map<string, int> rt;
    for (int i = 0; i < M; i++)
    {
        string s;
        cin >> s;
        rt[s]++;
    }
    int ans = 0;
    for (auto ite = bt.begin(); ite != bt.end(); ++ite)
    {
        int num = (ite->second - rt[ite->first]);
        if (num < 0)
        {
            continue;
        }
        if (ans < num)
        {
            ans = num;
        }
    }

    cout << ans << endl;
    return 0;
}

/*Syakutori
cout << fixed << setprecision(10) << ans << endl;
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



ll gcd(ll a,ll b){
  if(a%b == 0){
    return b;
  }else{
    return gcd(b,a%b);
  }
}
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
