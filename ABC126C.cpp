#include <iostream>
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define MAXSIZE 10000000

bool comp(const pair<int,int> a, const pair<int,int> b) {
    return a.second < b.second;
}

int Dx[6] = { 0, 0, 1, 1,-1,-1};
int Dy[6] = { 1,-1, 1, 0, 0,-1};

//priority_queue<long long int,vector<long long int>, greater<long long int>> PQ;
//priority_queue<long long int> PQ1;
int main(){
  int N,K;
  cin >>N>>K;
  double ans = 0;
  for(double i = 1;i<=N;i++){
    if(i >= K){
      ans += (double)1/N;
      continue;
    }
    ans += (double)pow((double)1/2,ceil(log2(K/i))) / (double)N;

  }

  printf("%.16f\n",ans);
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
Full class double
printf("%.16f\n",ans);
*/