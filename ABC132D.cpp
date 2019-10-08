#include <iostream>
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define MAXSIZE 10000000;

bool comp(const pair<int,int> a, const pair<int,int> b) {
    return a.second < b.second;
}

const int MAX = 510000;
const int MOD = 1000000007;

long long fac[MAX], finv[MAX], inv[MAX];

void COMinit(){
  fac[0] = fac[1] = 1;
  finv[0] = finv[1] = 1;

  inv[1] = 1;
  for(int i = 2; i< MAX;i++){
    fac[i] = fac[i-1] * i %MOD;
    inv[i] = MOD - inv[MOD%i] * (MOD / i) % MOD;
    finv[i] = finv[i-1] * inv[i] % MOD;
  }
}

ll COM(int n, int k){
  if(n < k)return 0;
  if(n < 0 || k < 0)return 0;
  return fac[n]*(finv[k]*finv[n-k] % MOD)%MOD;
}


int main(){
    int N,K;

    cin >>N>>K;
    COMinit();

    int r = N-K;
    for(int i = 1;i<=K;i++){
      ll ans = COM(r+1,i)*COM(K-1,i-1)%MOD;
      cout <<ans<<endl;
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

//priority_queue<long long int,vector<long long int>, greater<long long int>> PQ;
//priority_queue<long long int> PQ1;

*/