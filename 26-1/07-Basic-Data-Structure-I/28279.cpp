#include <iostream>
#include <deque>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, com, num;
    deque<int> deq;

    cin >> n;

    for(int i = 0; i < n; i++) {
        cin >> com;

        if(com == 1) {
            cin >> num;

            deq.push_front(num);
        }
        else if(com == 2) {
            cin >> num;

            deq.push_back(num);
        }
        else if(com == 5) cout << deq.size() << "\n";
        else if(com == 6) {
            if(deq.empty()) cout << "1 \n";
            else cout << "0 \n";
        }
        else {
            if(deq.empty()) cout << "-1 \n";
            else {
                if(com == 3) {
                    cout << deq.front() << "\n";

                    deq.pop_front();
                }
                else if(com == 4) {
                    cout << deq.back() << "\n";

                    deq.pop_back();
                }
                else if(com == 7) cout << deq.front() << "\n";
                else cout << deq.back() << "\n";
            }
        }
    }

    return 0;
}