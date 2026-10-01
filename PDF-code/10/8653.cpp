#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, q;
    long long num, mid;
    long long pre = -1;
    vector<long long> left, right;

    cin >> n >> q;

    for(int i = 0; i < n; ++i) {
        cin >> num;

        if(num > pre) {
            left.push_back(num);

            pre = num;
        }
        else break;
    }

    right.push_back(pre);
    right.push_back(num);

    mid = pre;

    for(int i = left.size() + 1; i < n; ++i) {
        cin >> num;

        right.push_back(num);
    }

    reverse(right.begin(), right.end());

    while(q--) {
        cin >> num;

        auto it1 = lower_bound(left.begin(), left.end(), num);
        auto it2 = lower_bound(right.begin(), right.end(), num);

        if(num == mid) cout << "T\n";
        else if(num == left[it1 - left.begin()]) cout << "L\n";
        else if(num == right[it2 - right.begin()]) cout << "R\n";
        else cout << "N\n";
    }

    return 0;
}