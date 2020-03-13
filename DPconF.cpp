#include <iostream>
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define MAXSIZE 10000000;

const int MAX = 510000;
const int MOD = 1000000007;
const long long INF = 1LL << 60;

const ll MAXINDx = 3001;
const ll MAXINDy = 3001;


ll dp[MAXINDx][MAXINDy] = {0};

int main(){
    string s,t;

    cin >>s>>t;

    for(int i = 0; i < MAXINDx; i++){
        for(int j = 0;j < MAXINDy;j++){
            dp[i][j] = -1;
        }
    }

    dp[0][0] = 0;

    for(int i = 1; i <= s.size();i++){
        for(int j = 1; j <= t.size(); j++){
            if(s[i-1] == t[j-1]){
                dp[i][j] = dp[i-1][j-1] + 1;
            }
            else{
                dp[i][j] = max(dp[i-1][j], max(dp[i][j-1], dp[i][j]));
            }
        }
    }

    string ans = "";

    int i = (int)s.size(), j = (int)t.size();
    while(i > 0 && j > 0){
        if(dp[i][j] == dp[i-1][j]){
            i--;
        }
        else if(dp[i][j] == dp[i][j-1]){
            j--;
        }
        else{
            ans = s[i-1]+ans;
            i--;j--;
        }
    }

    cout <<ans<<endl;


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
