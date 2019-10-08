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
    int N;
    string boins = "aiueo";
    vector <int> ansList;

    while(cin >>N,N){
        vector<string> name;
        vector<string> codes;
        int maxLen = -1;
        int k = -1;

        for(int i = 0;i<N;i++){
            string s;
            cin >>s;
            name.push_back(s);
        }

        for(int i = 0;i<N;i++){
            string code = "";
            code += name[i][0];

            for(int j = 1;j<(int)name[i].size();j++){
                if(boins.find(name[i][j-1]) != std::string::npos){
                    code += name[i][j];
                }
            }
            codes.push_back(code);
            maxLen = max(maxLen,(int)code.size());
        }
        int ans = -1;

        for(int i = 1;i<51;i++){
            set<string> st;
            for(int j = 0;j<N;j++){
                st.insert(codes[j].substr(0,i));
            }
            if(st.size() == N){
                ans = i;
                break;
            }
        }
        ansList.push_back(ans);
    }

    for(int i= 0;i<(int)ansList.size();i++){
        cout <<ansList[i]<<endl;
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

*/