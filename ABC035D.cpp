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

vector<vector<pair<int, int>>> edge; //edge[from] => <to, cost>
ll d_to[100001] = {0};
ll d_re[100001] = {0};

int N, M;

void dijkstra(int s, ll *d)
{
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> que; //{least distancem, nodeNUm}
    fill(d, d + N + 1, INF);
    d[s] = 0;
    que.push(make_pair(0, s));

    while (!que.empty())
    {
        pair<int, int> p = que.top();
        que.pop();
        int v = p.second;
        if (d[v] < p.first)
            continue;
        for (auto nv : edge[v])
        {
            if (d[nv.first] > d[v] + nv.second)
            {
                d[nv.first] = d[v] + nv.second;
                que.push(make_pair(d[nv.first], nv.first));
            }
        }
    }
}

int main()
{
    ll T;
    ll AList[100001];

    ll ans = 0;
    cin >> N >> M >> T;

    for (int i = 1; i <= N; i++)
    {
        cin >> AList[i];
    }

    edge.assign(N + 1, vector<pair<int, int>>());

    for (int i = 0; i < M; i++)
    {
        int a, b, c;
        cin >> a >> b >> c;
        edge[a].push_back(make_pair(b, c));
    }

    dijkstra(1, d_to);

    vector<vector<pair<int, int>>> temp(edge.size());
    copy(edge.begin(), edge.end(), temp.begin());
    edge.clear();
    edge.assign(N + 1, vector<pair<int, int>>());

    for (int i = 1; i <= N; i++)
    {
        for (auto v : temp[i])
        {
            edge[v.first].push_back(make_pair(i, v.second));
        }
    }

    dijkstra(1, d_re);

    for (int i = 1; i <= N; i++)
    {
        ll temp = AList[i] * (T - d_to[i] - d_re[i]);
        if ((T - d_to[i] - d_re[i]) < 0)
            continue;
        ans = max(ans, temp);
    }

    cout << fixed << setprecision(10) << ans << endl;

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

int visi[100001] = {0};
void dfs(int u)
{
    visi[u] = 1;
    for (auto nv : edge[u])
    {
        if ((visi[nv.first] == 1))
            continue;
        node[nv.first] = (node[u] + nv.second) % 2;
        dfs(nv.first);
    }
}

*/
