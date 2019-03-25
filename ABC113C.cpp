#include<bits/stdc++.h>
using namespace std;

bool comp(pair<int ,pair<int, int>> L, pair<int ,pair<int, int>> R){
  if(L.second.first != R.second.first)return L.second.first > R.second.first;
  if(L.second.second != R.second.second)return L.second.second > R.second.second;
}

int main(){
  int N,M;
  vector<pair<int ,pair<int, int>>> PandY;

  vector<pair<int, string>> ansvec;
  cin >>N>>M;

  for(int i = 0; i<M;i++){
    int P,Y;
    pair<int, int> = kari;

    cin >>P>>Y;
    Ylist[i] = Y;
    kari = make_pair(P,Y);
    PandY.push_back(make_pair(i,kari));
  }

  sort(PandY.begin(), PandY.end(),comp);

  for(int i = 0;i<(int)PandY.size();i++){
    int ind = PandY[i].first;
    string indnum;

    indnum = 

    ansvec.push_back(make_pair(ind, indnum));
  }

  sort(ansvec.begin(), ansvec.end() );

  for(int i = 0;i<M;i++){
    cout <<ansvec[i].second<<endl;
  }


  return 0;
}
