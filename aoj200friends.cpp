#include <iostream>
#include<bits/stdc++.h>
using namespace std;

bool comp(const pair<string,int> a, const pair<string,int> b) {
  if (a.first != b.first)
    return a.first < b.first; // 高い順に並べたいので演算子を逆に
  else{
      return a.second > b.second;
  }
}

//priority_queue<long long int,vector<long long int>, greater<long long int>> PQ;
//priority_queue<long long int> PQ1;




int main(){
    int list[100003] = {0};
    long long int Rsum[100003] = {0};

    int N;

    cin >>N;

    for(int i = 0;i<N;i++){
        int a,b;

        cin >>a>>b;

        list[a] += 1;
        list[b+1] += -1;
    }

    for(int i = 1;i <= 100003;i++){
        Rsum[i] = Rsum[i-1] + list[i];
    }

    long long int ans = -1;

    for(int i = 0;i <= N+1;i++){
       if(Rsum[i]+1 >= i){
           ans = i;
       }
    }

    cout <<ans-1<<endl;



  return 0;
}