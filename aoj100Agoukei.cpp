#include <bits/stdc++.h>
using namespace std;
#include <iostream>
typedef pair<pair<int ,int>, int> P;
vector<pair<pair<int ,int>, int> > v_ans;
vector<int>v_;
vector<long int>v_ansl;
/*taro tenn,hanako_ten,sum*/

bool cmp(P h, P r){
  return h.second < r.second;
}

int v[101];
int main(){
  int D,E;
  cin >>D>>E;

  while(!(D==0 and E == 0)){
    float ans = 20000;
    for(int i = 0;i<=D;i++){
      ans = min(ans,(float)abs(sqrt(i*i+(D-i)*(D-i))-E));

    }
    cout <<ans<<endl;
    cin >>D>>E;
  }

  return 0;
}
