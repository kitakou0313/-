#include <iostream>
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define MAXSIZE 10000000;

bool comp(const pair<int,int> a, const pair<int,int> b) {

    return a.second < b.second;
}

int Dx[6] = { 0, 0, 1, 1,-1,-1};
int Dy[6] = { 1,-1, 1, 0, 0,-1};

//priority_queue<long long int,vector<long long int>, greater<long long int>> PQ;
//priority_queue<long long int> PQ1;
int main(){

  int n;
  vector<int> list;
  int ans=0;


  cin >>n;
  for(int i = 0;i<n;i++){
    int x;
    cin >>x;
    list.push_back(x);
  }

  for(int i = 1;i<n-1;i++){
    if((list[i-1] > list[i] && list[i] > list[i+1]) || (list[i-1] < list[i] && list[i] < list[i+1]))ans++;
  }
  cout <<ans<<endl;;
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