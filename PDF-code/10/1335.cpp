#include <iostream>

using namespace std;

bool grid[129][129];
int white = 0;
int blue = 0;
bool check;
bool first;

void compare(int x, int y, int size) {
    check = true;

    for(int i = x; i < x + size; ++i) {
        for(int j = y; j < y + size; ++j) {
            if(grid[x][y] != grid[i][j]) {
                check = false;

                break;
            }
        }
    }

    if(check) {
        if(grid[x][y]) ++blue;
        else ++white;
    }
    else {
        compare(x, y, size / 2);
        compare(x + size / 2, y, size / 2);
        compare(x, y + size / 2, size / 2);
        compare(x + size / 2, y + size / 2, size / 2);
    }
}

int main() {
    int n;

    cin >> n;

    for(int i = 1; i <= n; ++i) {
        for(int j = 1; j <= n; ++j) {
            cin >> grid[i][j];
        }
    }

    compare(1, 1, n);

    cout << white << "\n" << blue;

    return 0;
}