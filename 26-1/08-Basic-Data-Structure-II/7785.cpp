#include <iostream>
#include <set>
#include <algorithm>

using namespace std;

int main() {
    int n;
    string name, state;
    set<string, greater<string>> worker; // greater<string>을 통한 내림차순 정렬

    cin >> n;

    for(int i = 0; i < n; i++) {
        cin >> name >> state;

        if(state == "enter") {
            worker.insert(name);
        }
        else {
            worker.erase(name);
        }
    }

    // 어떻게하면 정렬 순으로 출력할 수 있을까?

    return 0;
}