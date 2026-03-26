#include <iostream>
#include <stack>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, com, num;
    stack<int> stk;

    cin >> n;

    for(int i = 0; i < n; i++) {
        cin >> com;

        if(com == 1) {
            cin >> num;

            stk.push(num);
        }
        else if(com == 3) {
            cout << stk.size() << "\n";
        }
        else if(!stk.empty()) {
            if(com == 2) {
                cout << stk.top() << "\n";

                stk.pop();
            }
            else if(com == 5) cout << stk.top() << "\n";
            else if(com == 4) cout << stk.empty() << "\n";
        }
        else {
            if(com == 4) cout << stk.empty() << "\n";
            else cout << "-1\n";
        }
    }
    
    return 0;
}