#include <iostream>
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define MAXSIZE 10000000;
#define INF 100000000;

bool comp(const pair<string,int> a, const pair<string,int> b) {
  if (a.first != b.first)
    return a.first < b.first; // 高い順に並べたいので演算子を逆に
  else{
      return a.second > b.second;
  }
}

int Dx[6] = { 0, 0, 1, 1,-1,-1};
int Dy[6] = { 1,-1, 1, 0, 0,-1};

//priority_queue<long long int,vector<long long int>, greater<long long int>> PQ;
//priority_queue<long long int> PQ1;
int main(){
    int b[201] = {0};
    int dp[1000001] = {0};
    int dpOdd[1000001] = {0};

    for(int i = 0;i<201;i++){
        b[i] = i*(i+1)*(i+2)/6;
    }

    for(int i = 0;i<1000001;i++){
        dp[i] = dpOdd[i] = 99999999;
    }
    dp[0] = 0;dpOdd[0] = 0;
    for(int i = 0;i<1000001;i++){
        for(int j = 0;j < 201;j++){
            if(i+b[j] <= 1000000)dp[i+b[j]] = min(dp[i+b[j]] , dp[i]+1);
            if((b[j]%2 == 1 )&& (i+b[j] <= 1000000))dpOdd[i+b[j]] = min(dpOdd[i+b[j]] , dpOdd[i]+1);
        }
    }

    int N;

    while (cin >>N,N){
        cout <<dp[N]<<" "<<dpOdd[N]<<endl;
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

*/