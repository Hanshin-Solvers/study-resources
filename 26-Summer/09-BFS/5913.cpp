#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int n, m;
vector<int> adj[501];
int visit[501];

void bfs(int start) {
    queue<int> q;

    q.push(start);
    visit[start] = 1;

    while(!q.empty()) {
        int cur = q.front();

        for(int next : adj[cur]) {
            if(visit[next] == 0) {
                visit[next] = visit[cur] + 1;
                q.push(next);
            }
        }

        q.pop();
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int u, v;
    int cnt = 0;

    cin >> n >> m;

    for(int i = 1; i <= m; ++i) {
        cin >> u >> v;

        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    bfs(1);

    for(int i = 2; i <= n; ++i) {
        if(visit[i] == 2 || visit[i] == 3) {
            ++cnt;
        }
    }

    cout << cnt;

    return 0;
}