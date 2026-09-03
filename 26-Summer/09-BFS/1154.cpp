#include <iostream>
#include <string>
#include <queue>

using namespace std;

int w, h;
int cnt = 0;
bool board[21][21];
bool visit[21][21];
int dr[] = {-1, 1, 0, 0};
int dc[] = {0, 0, -1, 1};

void bfs(int r, int c) {
    queue<pair<int, int>> q;

    q.push({r, c});
    visit[r][c] = true;
    ++cnt;

    while(!q.empty()) {
        int cur_r = q.front().first;
        int cur_c = q.front().second;

        for(int i = 0; i < 4; ++i) {
            int nr = cur_r + dr[i];
            int nc = cur_c + dc[i];

            if(nr >= 1 && nr <= h && nc >= 1 && nc <= w) {
                if(board[nr][nc] == 1 && visit[nr][nc] == false) {
                    visit[nr][nc] = true;
                    ++cnt;
                    q.push({nr, nc});
                }
            }
        }

        q.pop();
    }
}

int main() {
    int r, c;
    string s;

    cin >> w >> h;

    for(int i = 1; i <= h; ++i) {
        cin >> s;

        for(int j = 1; j <= w; ++j) {
            if(s[j - 1] == '.') board[i][j] = 1;
            else if(s[j - 1] == '#') board[i][j] = 0;
            else if(s[j - 1] == '@') {
                board[i][j] = 1;
                r = i;
                c = j;
            }
        }
    }

    bfs(r, c);

    cout << cnt;

    return 0;
}