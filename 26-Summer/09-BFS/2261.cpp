#include <iostream>
#include <vector>
#include <string>
#include <queue>
#include <algorithm>

using namespace std;

vector<string> v(1001);
vector<int> adj[1001];
int par[1001];
int n, k, s, e, cur;

void bfs(int start) {
    queue<int> q;

    q.push(start);

    par[start] = start;

    while(!q.empty()) {
        cur = q.front();
        
        if(cur == e) break;

        for(int next : adj[cur]) {
            if(par[next] == 0) {
                par[next] = cur;

                q.push(next);
            }
        }

        q.pop();
    }
}


int main() {
    int cnt;
    bool check;
    vector<int> res;

    cin >> n >> k;

    for(int i = 1; i <= n; ++i) {
        cin >> v[i];
    }

    cin >> s >> e;

    for(int i = 1; i <= n; ++i) {
        for(int j = i + 1; j <= n; ++j) {
            check = true;
            cnt = 0;

            for(int m = 0; m < k; ++m) {
                if(v[i][m] != v[j][m]) ++cnt;

                if(cnt >= 2) {
                    check = false;

                    break;
                }
            }

            if(check) {
                adj[i].push_back(j);
                adj[j].push_back(i);
            }
        }
    }

    bfs(s);

    if(par[e] != 0) {
        cur = e;

        while(true) {
            res.push_back(cur);

            if(cur == s) break;
            else cur = par[cur];
        }
    }
    else cout << -1;

    reverse(res.begin(), res.end());

    for(int i : res) {
        cout << i << " ";
    }

    return 0;
}