#include <iostream>
#include <string>
#include <stack>

using namespace std;

int main() {
    int n;
    string s;

    cin >> n;

    for(int i = 0; i < n; i++) {
        stack<char> stk;
        bool check = true;

        cin >> s;

        for(char c : s) {
            if(c == '(') stk.push(c);
            else {
                if(stk.empty()) {
                    check = false;

                    break;
                }
                else if(stk.top() == '(') {
                    stk.pop();
                }
                else {
                    check = false;

                    break;
                }
            }
        }

        if(!stk.empty()) check = false;

        if(check) cout << "YES\n";
        else cout << "NO\n";
    }

    return 0;
}