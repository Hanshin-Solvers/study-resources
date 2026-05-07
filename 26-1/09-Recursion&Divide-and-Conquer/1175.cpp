#include <iostream>
#include <vector>

using namespace std;

vector<int> store(8);
int n;

void dice(int cnt, int m) {
    if((n - cnt) * 6 < m) return;
    else if((n - cnt) * 1 > m) return;
    else if(cnt == n) {
        for(int i = 0; i < n; ++i) {
            cout << store[i] << " ";
        }

        cout << "\n";

        return;
    }

    for(int i = 1; i <= 6; ++i) {
        store[cnt] = i;

        dice(cnt + 1, m - i);
    }
}

int main() {
    int m;

    cin >> n >> m;

    dice(0, m);

    return 0;
}