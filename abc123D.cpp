#include<bits/stdc++.h>
#include <iostream>
using namespace std;

int main(){
  long long int X,Y,Z,K;
  vector<long long int>A,B,C,ansList;

  cin >>X>>Y>>Z>>K;

  for(int i=0;i<X;i++){
      long long int x;
      cin >>x;
      A.push_back(x);
}

  for(int i =0;i<Y;i++){
      long long int x;
      cin >>x;
      B.push_back(x);
  }

  for(int i =0;i<Z;i++){
      long long int x;
      cin >>x;
      C.push_back(x);
  }
  
  sort(A.begin(),A.end(),greater<long long int>());
  sort(B.begin(),B.end(),greater<long long int>());
  sort(C.begin(),C.end(),greater<long long int>());
  

	long int loopNum = 0;

	for(int i = 0;(i < X);i++){
		for(int j = 0;(j < Y);j++){
			for(int k = 0;(k < Z);k++){
        if ((i+1)*(j+1)*(k+1) <= 3000)ansList.push_back(A[i]+B[j]+C[k]);
        else {cout <<"end"<<endl;break;}
        
			}
		}
	}

	sort(ansList.begin(),ansList.end(),greater<long long int>());

	for(int i = 0;i<K;i++){
		cout <<ansList[i]<<endl;
	}

  return 0;
  }