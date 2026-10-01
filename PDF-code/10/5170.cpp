#include <iostream>
#include <vector>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long n, t, mid, total, res;
    long long high = 0;
    long long low = 0;

    cin >> n >> t;

    vector<long long> v(n);

    for(int i = 0; i < n; ++i) {
        cin >> v[i];

        high = max(high, v[i]);
    }

    while(low <= high) {
        mid = low + (high - low) / 2;
        total = 0;

        for(int i = 0; i < n; ++i) {
            if(v[i] > mid) total += v[i] - mid;
        }

        if(total >= t) {
            res = mid;
            low = mid + 1;
        }
        else high = mid - 1;
    }

    cout << res;

    return 0;
}