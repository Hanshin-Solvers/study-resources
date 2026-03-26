#include <iostream>
#include <queue>
#include <string>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, num;
    string s;
    queue<int> q;

    cin >> n;

    for(int i = 0; i < n; i++) {
        cin >> s;

        if(s == "push") {
            cin >> num;

            q.push(num);
        }
        else if(s == "size") cout << q.size() << "\n";
        else if(s == "empty") {
            if(q.empty()) cout << "1\n";
            else cout << "0\n";
        }
        else if(!q.empty()) {
            if(s == "pop") {
                cout << q.front() << "\n";

                q.pop();
            }
            else if(s == "front") cout << q.front() << "\n";
            else cout << q.back() << "\n";
        }
        else cout << "-1\n";
    }
}