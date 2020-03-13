#include <iostream>
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define MAXSIZE 10000000;

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

const int MAX = 510000;
const int MOD = 1000000007;

int main(){
    int N;
    int HList[100001] = {0};
    int dp[100001] = {1145141919};

    for(int i = 0; i < 100001;i++){
        dp[i] = 1145141919;
    }
    cin >>N;

    for(int i = 0;i < N;i++){
        cin >>HList[i];
    }
    dp[0] = 0;
    dp[1] = dp[0] + abs(HList[1] - HList[0]);

    for(int i = 2; i <= N-1;i++){
        dp[i] = min(dp[i-2] + abs(HList[i] - HList[i-2]),dp[i-1] + abs(HList[i] - HList[i-1]));
    }

    cout <<dp[N-1]<<endl;
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