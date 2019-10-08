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

  int N;
  vector<pair<int, int> >tList;
  string s = "Yes";

  cin >>N;

  for(int i = 0;i<N;i++){
      int A,B;
      cin >>A>>B;
      tList.push_back(make_pair(A,B));
  }

  sort(tList.begin(),tList.end(),comp);

  long long int sum = 0;

  for(int i = 0;i<N;i++){
      if(sum+tList[i].first> tList[i].second){
          s = "No";
          break;
      }
      sum += tList[i].first;
  }

  cout <<s<<endl;
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