#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, q, num;

    cin >> n >> q;

    vector<int> v(n);

    for(int i = 0; i < n; ++i) {
        cin >> v[i];
    }

    while(q--) {
        cin >> num;

        auto it = lower_bound(v.begin(), v.end(), num);

        if(it == v.begin()) cout << v[0];
        else if(abs(v[it - v.begin()] - num) < abs(v[it - v.begin() - 1] - num)) cout << v[it - v.begin()];
        else cout << v[it - v.begin() - 1];

        cout << "\n";
    }

    return 0;
}