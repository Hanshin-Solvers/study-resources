#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long n, t, mid, total, res, high, low;

    cin >> n >> t;

    vector<long long> v(n);

    for(int i = 0; i < n; ++i) {
        cin >> v[i];
    }

    sort(v.begin(), v.end());

    low = 1;
    high = v[n - 1];

    while(low <= high) {
        mid = low + (high - low) / 2;
        total = 0;

        for(int i = 0; i < n; ++i) {
            total += min(v[i], mid);
        }

        if(total >= t) {
            res = mid;
            high = mid - 1;
        }
        else low = mid + 1;
    }

    cout << res;

    return 0;
}