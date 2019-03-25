#include <iostream>
#include <queue>
#include <cstring>

using namespace std;

int dx[] = {1, 1, 0, -1, -1, 0};
int dy[] = {1, 0, -1, -1, 0, 1};

int main(){
    int t, n;
    int visit[200][200];
    while(cin >> t >> n, t){
        int x, y;
        memset(visit, -1, sizeof(visit));
        for(int i=0;i<n;i++){
            cin >> x >> y;
            visit[x+100][y+100] = 1;
        }
        cin >> x >> y;
        int res = 0;
        queue< pair<int, int> > qu; qu.push(make_pair(x+100,y+100));
        visit[x+100][y+100] = 0;
        while(!qu.empty()){
            pair<int,int> pr = qu.front(); qu.pop();
            int cx = pr.first, cy = pr.second;
            res++;
            if(visit[cx][cy] == t) continue;
            for(int i=0;i<6;i++){
                int nx = cx+dx[i], ny = cy+dy[i];
                if(visit[nx][ny]!=-1) continue;
                visit[nx][ny] = visit[cx][cy]+1;
                qu.push(make_pair(nx,ny));
            }
        }
        cout << res << endl;
    }
}
