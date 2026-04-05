#include <iostream>
#include <set>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    set<int> s;
    int n, nNum, m, mNum;

    cin >> n;

    for(int i = 0; i < n; i++) {
        cin >> nNum;

        s.insert(nNum);
    }

    cin >> m;

    for(int i = 0; i < m; i++) {
        cin >> mNum;

        // 어떻게 하면 set에 있는지 판별할 수 있을까?
    }

    return 0;
}