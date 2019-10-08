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
    int N;
    vector<int>A;
    int ori[200000] = {0};

    cin >>N;

    for(int i = 0;i<N;i++){
      int a;
      cin >>a;
      A.push_back(a);
      ori[i] = a;
    }

    sort(A.begin(),A.end());


    for(int i = 0;i<N;i++){
      int del = ori[i];
      if(del != A[N-1]){
        cout <<A[N-1]<<endl;
      }else{
        cout<<A[N-2]<<endl;

      }
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