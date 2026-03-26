#include <iostream>
#include <queue>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    queue<int> q;

    cin >> n;

    for(int i = 1; i <= n; i++) {
        q.push(i);
    }

    while(q.size() > 1) {
        q.pop();

        if(q.size() == 1) break;
        
        q.push(q.front());
        q.pop();
    }

    cout << q.front();

    return 0;
}