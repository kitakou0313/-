#include<bits/stdc++.h>
using namespace std;

long int score[11][2];
int main(){
  int D;
  long int G;
  int ans = 1000000000;

  cin >>D>>G;
  for(int i = 0; i < D;i++){
    cin >>score[i][0]>>score[i][1];
  }


  for(int i = D-1; i >= 0; i--){
    int cntall = 0,ind = i , cnti = 0;
    int SCORE = G;
    while(SCORE > 0 && ind >= 0){
      SCORE -= (ind+1)*100;
      cntall++;
      cnti++;
      if(score[ind][0] == cnti){
        SCORE -= score[ind][1];
        ind--;
        cnti = 0;
      }
    }
    if(SCORE <= 0)ans = min(ans , cntall);
  }
  cout <<ans<<endl;

  return 0;
}
