#include <iostream>
#include <stack>

using namespace std;

int main() {
    int n, num;
    int count = 0;
    stack<int> stk;

    cin >> n;

    for(int i = 0; i < n; i++) {
        cin >> num;

        if(/*어떤 조건일 때 수행해야지?*/) stk.pop();
        else stk.push(num);
    }

    while(/*어떤 조건이 들어가야 전부 출력할 수 있을까?*/) {
        count += stk.top();

        stk.pop();
    }

    cout << count;

    return 0;
}