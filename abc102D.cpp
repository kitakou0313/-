#include <bits/stdc++.h>
using namespace std;

long long int A[200001] = {0};
long long int sum[300000] = {0};

int main(){
  int N;
  cin >>N;

  for(int i = 1; i <= N;i++){
    cin >>A[i];
  }

  for(int i = 1;i <= N; i++){
    sum[i] = sum[i-1] + A[i];
  }
  int rec = 1e9;

  int left = 1,right = 3;

  for(int mid = 2 ; mid <= N - 2; mid++){
    while(left < mid and )
  }



  return 0;
}
