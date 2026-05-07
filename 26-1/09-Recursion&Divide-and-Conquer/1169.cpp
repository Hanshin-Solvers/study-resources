#include <iostream>
#include <vector>

using namespace std;

int n, type;
vector<int> store(5);
bool check[7];

void dice1(int cnt) {
    if(cnt == n) {
        for(int i = 0; i < n; ++i) {
            cout << store[i] << " ";
        }

        cout << "\n";

        return;
    }

    for(int i = 1; i <= 6; ++i) {
        store[cnt] = i;

        dice1(cnt + 1);
    }
}

void dice2(int cnt, int start) {
    if(cnt == n) {
        for(int i = 0; i < n; ++i) {
            cout << store[i] << " ";
        }

        cout << "\n";

        return;
    }

    for(int i = start; i <= 6; ++i) {
        store[cnt] = i;

        dice2(cnt + 1, i);
    }
}

void dice3(int cnt) {
    if(cnt == n) {
        for(int i = 0; i < n; ++i) {
            cout << store[i] << " ";
        }

        cout << "\n";

        return;
    }

    for(int i = 1; i <= 6; ++i) {
        if(check[i]) continue;

        check[i] = true;
        store[cnt] = i;


        dice3(cnt + 1);

        check[i] = false;
    }
}

int main() {
    cin >> n >> type;

    if(type == 1) dice1(0);
    else if(type == 2) dice2(0, 1);
    else dice3(0);

    return 0;
}