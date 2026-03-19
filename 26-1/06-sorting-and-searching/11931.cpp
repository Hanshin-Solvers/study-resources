#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;

    cin >> n;

    vector<int> v(n);

    for(int i = 0; i < n; i++) {
        cin >> v[i];
    }

    // 내림차순으로 정렬

    for(int i = 0; i < v.size(); i++) {
        cout << v[i] << "\n";
    }

    return 0;
}