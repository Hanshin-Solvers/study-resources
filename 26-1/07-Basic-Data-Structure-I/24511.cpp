#include <iostream>
#include <deque>

using namespace std;

const int MAX = 100000;
bool arr[MAX + 1];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    long long num;
    deque<long long> deq;

    cin >> n;

    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    for(int i = 0; i < n; i++) {
        cin >> num;

        if(!arr[i]) deq.push_back(num);
    }

    cin >> m;

    for(int i = 0; i < m; i++) {
        cin >> num;
        
        deq.push_front(num);
        
        cout << deq.back() << " ";

        deq.pop_back();
    }

    return 0;
}