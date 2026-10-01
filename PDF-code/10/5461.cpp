#include <iostream>
#include <vector>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long n, t, mid, res, total, cnt;
    long long low = 0;
    long long high = 0;
    bool check;

    cin >> n >> t;

    vector<long long> v(n);

    for(int i = 0; i < n; ++i) {
        cin >> v[i];

        high += v[i];
    }

    while(low <= high) {
        mid = low + (high - low) / 2;
        total = 1;
        cnt = 0;
        check = true;

        for(int i = 0; i < n; ++i) {
            if(cnt + v[i] > mid) {
                ++total;

                cnt = v[i];

                if(cnt > mid || total > t) {
                    check = false;

                    break;
                }
            }
            else cnt += v[i];
        }

        if(check) {
            res = mid;
            high = mid - 1;
        }
        else low = mid + 1;
    }

    cout << res;
    
    return 0;
}