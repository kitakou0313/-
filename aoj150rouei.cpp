#include <bits/stdc++.h>
using namespace std;
#include <iostream>

int main(){
  int n;
  string st = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
  cin >>n;

  while(n!=0){
    string s;
    vector<int>key;
    string ans = "";


    for(int i = 0; i<n;i++){
      int x;
      key.push_back(x);
    }
    cin >>s;

    for (int i = 0; i<(int)s.size(); i++){
      int ind = 0;
      char c;
      for (int j = 0; j < (int)st.size();j++){
        if(s[i] == st[j]){
          if(j - key[ind] < 0){
            c = st[j - key[ind] + 52];
          }
          else{
            c =  st[j - key[ind]];
          }
        }
      }
      ans = ans + c;
      ind++;
      if(ind >= (int)key.size()){
        ind = 0;
      }
    }
    cout <<ans<<endl;


    key.clear();
    cin >>n;
  }
  return 0;
}
