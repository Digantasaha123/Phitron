#include <bits/stdc++.h>
using namespace std;

int dx[] = {-2, -1, 1, 2, -2, -1, 1, 2};
int dy[] = {1, 2, 2, 1, -1, -2, -2, -1};
int n, m;
bool vis[20][20];
int dis[20][20];

bool isValid(int i, int j) {
    return (i >= 0 && j >= 0 && i < n && j < m);
}

void bfs(int si, int sj) {
    queue<pair<int, int>> q;
    q.push({si, sj});
    vis[si][sj] = true;
    dis[si][sj] = 0;

    while(!q.empty()) {
        pair<int, int> p = q.front();
        q.pop();

        for(int i = 0; i < 8; i++) {
            int newX = p.first + dx[i];
            int newY = p.second + dy[i];

            if(isValid(newX, newY) && !vis[newX][newY]) {
                q.push({newX, newY});
                vis[newX][newY] = true;
                dis[newX][newY] = dis[p.first][p.second] + 1;
            }
        }
    }
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        cin >> n >> m;
        memset(vis, false, sizeof(vis));
        memset(dis, -1, sizeof(dis));
        int si, sj, ex, ey;
        cin >> si >> sj >> ex >> ey;
        bfs(si, sj);
        cout << dis[ex][ey] << endl;
    }
    return 0;
}
