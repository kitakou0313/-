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
    ll A,B;
    int ans = 1;

    cin >>A>>B;
    ll lower = gcd(max(A,B),min(A,B));
    ll GCD = gcd(max(A,B),min(A,B));
    vector<int>primesA;

    for(int i = 2; i <= (ll)sqrt(GCD) + 2; i++){
      if(lower % i == 0){
        primesA.push_back(i);
        while(lower % i == 0){
        lower /= i;
        }
      }
    }
    if(lower > 1){
      primesA.push_back(lower);
    }

    cout <<1 + primesA.size()<<endl;

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