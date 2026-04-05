#include <iostream>
#include <map>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m, num;
    map<int, int> card;

    cin >> n;

    for(int i = 0; i < n; i++) {
        cin >> num;

        // 입력된 숫자 카드(key)의 value에 1 늘리기
    }

    cin >> m;

    for(int i = 0; i < m; i++) {
        cin >> num;

        if(card.count(num)) cout << card[num] << " ";
        else cout << 0 << " ";
    }

    return 0;
}