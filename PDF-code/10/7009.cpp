#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, q, t;
    bool check = true;

    cin >> n >> q;

    vector<int> v(n);

    for(int i = 0; i < n; ++i) {
        cin >> v[i];
    }

    sort(v.begin(), v.end());

    while(q--) {
        cin >> t;

        auto it = lower_bound(v.begin(), v.end(), t);

        if(v[it - v.begin()] != t) {
            cout << t << " ";

            check = false;
        }
    }

    if(check) cout << -1;
    
    return 0;
}