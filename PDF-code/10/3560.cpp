#include <iostream>
#include <string>

using namespace std;

bool grid[1025][1025];
string s;
bool check;

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
        if(grid[x][y]) s += '1';
        else s += '0';
    }
    else {
        s += 'X';
        
        compare(x, y, size / 2);
        compare(x, y + size / 2, size / 2);
        compare(x + size / 2, y, size / 2);
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

    cout << s;

    return 0;
}