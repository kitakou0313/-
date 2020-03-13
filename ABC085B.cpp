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

struct UnionFind
{
    vector<int> par;
    vector<int> rank;

    UnionFind(int N) : par(N), rank(N)
    {
        for (int i = 0; i < N; i++)
        {
            par[i] = i;
            rank[i] = 0;
        }
    }

    int root(int x)
    { // データxが属する木の根を再帰で得る：root(x) = {xの木の根}
        if (par[x] == x)
            return x;
        return par[x] = root(par[x]);
    }

    void unite(int x, int y)
    {                     // xとyの木を併合
        int rx = root(x); //xの根をrx
        int ry = root(y); //yの根をry
        if (rx == ry)
            return; //xとyの根が同じ(=同じ木にある)時はそのまま

        if (rank[rx] < rank[ry])
        {
            par[rx] = ry;
        }
        else
        {
            par[ry] = rx;
            if (rank[rx] == rank[ry])
                rank[rx]++;
        }
    }

    bool same(int x, int y)
    { // 2つのデータx, yが属する木が同じならtrueを返す
        int rx = root(x);
        int ry = root(y);
        return rx == ry;
    }
};

int main()
{
    int N, K, L;

    cin >> N >> K >> L;

    UnionFind dt(N);
    UnionFind tt(N);

    for (int i = 0; i < K; i++)
    {
        int x, y;
        cin >> x >> y;
        dt.unite(x - 1, y - 1);
    }

    for (int i = 0; i < L; i++)
    {
        int x, y;
        cin >> x >> y;
        tt.unite(x - 1, y - 1);
    }

    map<pair<int, int>, int> ans;

    for (int i = 1; i <= N; i++)
    {
        int dr = dt.root(i - 1);
        int tr = tt.root(i - 1);

        if (ans.find(make_pair(dr, tr)) != ans.end())
            ans[make_pair(dr, tr)]++;
        else
            ans[make_pair(dr, tr)] = 1;
    }
    for (int i = 1; i <= N; i++)
    {
        cout << ans[make_pair(dt.root(i - 1), tt.root(i - 1))] << " ";
    }
    cout << endl;

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
