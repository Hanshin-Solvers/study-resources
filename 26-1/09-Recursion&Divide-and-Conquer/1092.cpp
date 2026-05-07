#include <iostream>

using namespace std;

long long pow(long long a, long long b) {
    if(b == 0) return 1;

    long long temp = pow(a, b / 2);

    if(b % 2 == 0) return (temp * temp) % 20091024;
    else return (((temp * temp) % 20091024) * (a % 20091024)) % 20091024;
}

int main() {
    long long x, y, result;

    cin >> x >> y;

    result = pow(x, y);

    cout << result;

    return 0;
}