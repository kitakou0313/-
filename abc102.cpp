#include <bits/stdc++.h>
using namespace std;

int main(){
  int N;
  vector<int>A;
  cin >>N;

  for (int i = 0; i<N;i++){
    int x;
    cin >>x;
    A.push_back(x-i+1);
  }

  sort(A.begin(),A.end());
  long long int ans= 0;



  for (int i = 0; i< N;i++){
    ans += abs(A[i]-A[(N-1)/2]);
  }
  cout <<ans<<endl;
  return 0;
}
