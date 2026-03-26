#include <iostream>
#include <queue>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int buffersize, n;
    queue<int> q;

    cin >> buffersize;

    while(cin >> n) {
        if(/*조건 넣기*/) break;
        else if(/*조건 넣기*/) q.pop();
        else if(/*조건 넣기*/) continue;
        else q.push(n);
    }

    if(q.empty()) cout << "empty";
    else {
        while(!q.empty()) {
            cout << q.front() << " ";

            q.pop();
        }
    }

    return 0;
}