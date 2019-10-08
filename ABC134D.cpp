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

int main(){
    ll L,R;

    cin >>L>>R;

    if( (R - L)>= 2019){
      cout <<0<<endl;
    }
    else{
      ll minMod = 10000000;
      for(ll i = L;i<=R;i++){
        for(ll j = i+1;j<=R;j++){
          minMod = min(minMod,(i*j)%2019);
        }
      }
      cout <<minMod<<endl;
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