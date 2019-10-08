#include <iostream>
#include<bits/stdc++.h>
#include <fstream>
using namespace std;
typedef long long int ll;
#define MAXSIZE 10000000;

bool comp(const pair<int,int> a, const pair<int,int> b) {
    return a.second < b.second;
}

int dp[20001][256] = {0};
int main(){
    /*
    ifstream in("input.txt");
    cin.rdbuf(in.rdbuf());
    ofstream out("output.txt");
    cout.rdbuf(out.rdbuf());*/

    int N,M;

    cin >>N>>M;

    while(!(N == 0 && M == 0)){
        int C[20] = {0},x[20001] = {0};


        memset(dp, 999999, sizeof(dp));

        for(int i = 0;i<256;i++){
            dp[0][128] = 0;
        }

        for(int i = 0;i<M;i++){
            cin >>C[i];
        }

        for(int i = 0;i<N;i++){
            cin >>x[i];
        }
        for(int i = 1;i<=N;i++){
            for(int from = 0;from<256;from++){
                for(int j = 0;j<M;j++){
                    int xx = C[j]+from;
                    if(xx >= 256)xx = 255;
                    if(xx <= 0)xx = 0;
                    int cost = (xx-x[i])*(xx-x[i]);
                    dp[i][xx] = min(dp[i][xx],dp[i-1][from] + cost);

                }
            }
        }

        int minimum = 99999999;

        for(int i = 0; i <= 255; i++){
            minimum = min(minimum,dp[N][i]);
        }

        cout <<minimum<<endl;
        cin >>N>>M;
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