#include <iostream>
#include <queue>

using namespace std;

int grid[1001][1001];
bool visit[1001][1001];
int n, m, r1, r2, c1, c2;
int dr[] = {1, 1, -1, -1, 2, -2, 2, -2};
int dc[] = {2, -2, 2, -2, 1, 1, -1, -1};

struct Rcw {
    int row;
    int col;
    int weight;
};

void bfs(int r, int c) {
    queue<Rcw> q;
    int nr, nc, cnt;

    grid[r][c] = 0;
    visit[r][c] = true;

    q.push({r, c, 0});

    while(!q.empty()) {
        cnt = q.front().weight + 1;

        for(int i = 0; i < 8; ++i) {
            nr = q.front().row + dr[i];
            nc = q.front().col + dc[i];

            if(0 < nr && nr <= n && 0 < nc && nc <= m) {
                if(!visit[nr][nc]) {
                    visit[nr][nc] = true;
                    grid[nr][nc] = cnt;

                    q.push({nr, nc, cnt});
                }
            }
        }

        q.pop();
    }
}

int main() {
    cin >> n >> m >> r1 >> c1 >> r2 >> c2;

    bfs(r1, c1);

    cout << grid[r2][c2];

    return 0;
}