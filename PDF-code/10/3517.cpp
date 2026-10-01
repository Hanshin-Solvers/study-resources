#include <iostream>
#include <vector>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, q, target, low, high, mid;
    bool check;

    cin >> n;

    vector<int> v(n);

    for(int i = 0; i < n; ++i) {
        cin >> v[i];
    }

    cin >> q;

    while(q--) {
        cin >> target;

        check = true;
        low = 0;
        high = n - 1;

        while(low <= high) {
            mid = (low + high) / 2;

            if(v[mid] == target) {
                cout << mid << " ";

                check = false;

                break;
            }

            if(v[mid] > target) high = mid - 1;
            else low = mid + 1;
        }

        if(check) cout << -1 << " ";
    }

    return 0;
}