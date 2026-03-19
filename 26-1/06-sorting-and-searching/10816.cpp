#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m, num;
    vector<int> v;

    cin >> n;

    for(int i = 0; i < n; i++) {
        cin >> num;

        v.push_back(num);
    }

    sort(v.begin(), v.end());

    cin >> m;

    for(int i = 0; i < m; i++) {
        cin >> num;

        // 무엇을 출력해야할까?
    }

    return 0;
}