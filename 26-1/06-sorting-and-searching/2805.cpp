#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    long long n, m, num, mid, count;
    long long high = 0;
    long long low = 0;
    long long result = 0;
    vector<long long> v;

    cin >> n >> m;

    for(int i = 0; i < n; i++) {
        cin >> num;

        v.push_back(num);

        if(high < num) high = num;
    }

    while(low <= high) {
        mid = (low + high) / 2;
        count = 0;

        for(int i = 0; i < n; i++) {
            if(v[i] - mid > 0) count += v[i] - mid;
        }

        if(count >= m) {
            result = mid;
            low = mid + 1;
        }
        else high = mid - 1;
    }

    cout << result;
    

    return 0;
}