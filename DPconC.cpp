#include <iostream>
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define MAXSIZE 10000000;

const int MAX = 510000;
const int MOD = 1000000007;

int main(){
    int N;
    int a[100001];
    int b[100001];
    int c[100001];

    int dp[100001][3] = {0};

    cin >>N;

    for(int i = 0; i < N;i++){
        cin >>a[i]>>b[i]>>c[i];
    }

    dp[0][0] = a[0];
    dp[0][1] = b[0];
    dp[0][2] = c[0];

    for(int i = 1; i < N;i++){
        dp[i][0] = max(dp[i-1][1] + a[i], dp[i-1][2] + a[i]);
        dp[i][1] = max(dp[i-1][0] + b[i], dp[i-1][2] + b[i]);
        dp[i][2] = max(dp[i-1][0] + c[i], dp[i-1][1] + c[i]);
    }

    cout <<max(dp[N-1][0], max(dp[N-1][1], dp[N-1][2]))<<endl;

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
