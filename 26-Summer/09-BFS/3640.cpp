#include <iostream>
#include <queue>

using namespace std;

int n, k;
int visit[100001];

void bfs(int start) {
    queue<int> q;

    q.push(start);
    visit[start] = 1;

    while(!q.empty()) {
        int cur = q.front();

        if(cur == k) break;

        int next_pos[3] = {cur - 1, cur + 1, cur * 2};

        for(int i = 0; i < 3; ++i) {
            int next = next_pos[i];

            if(next >= 0 && next <= 100000) {
                if(visit[next] == 0) {
                    visit[next] = visit[cur] + 1;
                    q.push(next);
                }
            }
        }

        q.pop();
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n >> k;

    bfs(n);

    cout << visit[k] - 1;

    return 0;
}