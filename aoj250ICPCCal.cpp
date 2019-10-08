#include <iostream>
#include<bits/stdc++.h>
#include <fstream>
using namespace std;
typedef long long int ll;
#define MAXSIZE 10000000;

bool comp(const pair<int,int> a, const pair<int,int> b) {
    return a.second < b.second;
}

int LOOP;
int NOWIND = 0;
vector<string> slist;

int solve(string s,int depth){
    int res = 0;
    LOOP--;
    if(s[depth] == '*'){
        res = 1;
        while(slist[NOWIND+1].length()-1 >= depth+1 && LOOP > 0){
            NOWIND++;
            res *= solve(slist[NOWIND],depth+1);
        }
    }
    else if(s[depth] == '+'){
        while(slist[NOWIND+1].length()-1 >= depth+1 && LOOP > 0){
            NOWIND++;
            res += solve(slist[NOWIND],depth+1);
        }
    }
    else{
        res = (int)(s[depth] - '0');
    }
    return res;
}

int main(){


    ifstream in("input.txt");
    cin.rdbuf(in.rdbuf());

    ofstream out("output.txt");
    cout.rdbuf(out.rdbuf());

    int n;
    int depth = 0,maxDepth;
    while(1){
        string s;
        cin >>n;
        if(n == 0)break;
        LOOP = n;

        for(int i = 0;i<n;i++){
            string s;
            cin >>s;
            slist.push_back(s);
        }
        cout <<solve(slist[NOWIND],0)<<endl;
        slist.clear();
        NOWIND = 0;
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