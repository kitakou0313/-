#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define MAXSIZE 10000000;

bool comp(const pair<string, int> a, const pair<string, int> b)
{
  if (a.first != b.first)
    return a.first < b.first; // 高い順に並べたいので演算子を逆に
  else
  {
    return a.second > b.second;
  }
}

int Dx[6] = {0, 0, 1, 1, -1, -1};
int Dy[6] = {1, -1, 1, 0, 0, -1};

//priority_queue<long long int,vector<long long int>, greater<long long int>> PQ;
//priority_queue<long long int> PQ1;
int main()
{

  int t, n;
  vector<int> ansList;

  cin >> t >> n;

  while (!(t == 0 && n == 0))
  {
    int map[200][200] = {0};
    int boolmap[200][200] = {0};
    queue<pair<int, int>> BFSQ;
    queue<int> Turn;
    int ans = 0;

    for (int i = 0; i < n; i++)
    {
      int x, y;
      cin >> x >> y;
      boolmap[x + 100][y + 100] = 1;
    }

    int sx, sy;
    cin >> sx >> sy;
    BFSQ.push(make_pair(sx + 100, sy + 100));
    Turn.push(0);

    while (!BFSQ.empty())
    {
      pair<int, int> pos;
      long int turnNum = Turn.front();
      Turn.pop();
      pos = BFSQ.front();
      BFSQ.pop();

      if (turnNum > t || map[pos.first][pos.second] == -1 || boolmap[pos.first][pos.second] == 1)
        continue;
      ans++;

      for (int i = 0; i < 6; i++)
      {
        /*if(pos.first + Dx[i] > 60 || pos.second + Dy[i] > 60 || pos.second + Dy[i] < 0 || pos.first + Dx[i] < 0 )continue;*/
        /*if(boolmap[pos.first + Dx[i]][pos.second + Dy[i]] == 0){*/
        BFSQ.push(make_pair(pos.first + Dx[i], pos.second + Dy[i]));
        Turn.push(turnNum + 1);
        /*}*/
      }
      map[pos.first][pos.second] = -1;
    }
    ansList.push_back(ans);
    cin >> t >> n;
  }

  for (int i = 0; i < (int)ansList.size(); i++)
  {
    cout << ansList[i] << endl;
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