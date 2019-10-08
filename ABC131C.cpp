#include <iostream>
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define MAXSIZE 10000000;

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

  long long int A,B,C,D,r,seki,oriC,oriD;

  cin >>A>>B>>C>>D;

  seki = C*D;
  oriC = C;
  oriD = D;

  if( C < D){
    long long int temp;
    temp = C;
    C = D;
    D = temp;
  }
  r = C % D;
  while(r!=0){
    C = D;
    D = r;
    r = C % D;
  }

  cout << (B) - ((B)/oriC + (B)/oriD - (B)/(seki/D)) - ((A-1) - ((A-1)/oriC + (A-1)/oriD - (A-1)/(seki/D)))<<endl;
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