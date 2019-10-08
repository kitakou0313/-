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

    cin >>N;

    vector<pair<int,int>> list;

    for(int i = 0;i < N;i++){
        int Ai;
        cin >>Ai;
        list.push_back(make_pair(i+1,Ai));
    }

    sort(list.begin(),list.end(),comp);

    for(int i = 0;i < list.size();i++){
        cout <<list[i].first<<" ";
    }
    cout <<endl;
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