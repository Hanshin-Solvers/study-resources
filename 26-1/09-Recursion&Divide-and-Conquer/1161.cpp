#include <iostream>

using namespace std;

void top(int n, int from, int temp, int to) {
    if(n == 1) {
        cout << n << " : " << from << " -> " << to << "\n";

        return;
    }

    top(n - 1, from, to, temp);

    cout << n << " : " << from << " -> " << to << "\n";

    top(n - 1, temp, from, to);
}


int main() {
    int n;

    cin >> n;

    top(n, 1, 2, 3);

    return 0;
}