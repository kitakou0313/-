#include <bits/stdc++.h>
using namespace std;
#include <iostream>

int main(){
  ofstream outputfile("ans.txt");
  ifstream in("J");

  cin.rdbuf(in.rdbuf());

  int a,b;
  while(cin >>a>>b){
    if(a == 0 and b == 0)break;
    outputfile <<a*b<<endl;
  }

  outputfile.close();
  return 0;
}
