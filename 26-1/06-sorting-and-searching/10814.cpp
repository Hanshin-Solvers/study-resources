#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

struct User {
    int age;
    string name;
};

bool compare(const User& a, const User& b) {
    // 문제에 따른 정렬 조건 작성하기
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    vector<User> v;

    cin >> n;

    for(int i = 0; i < n; i++) {
        User temp;
        cin >> temp.age >> temp.name;

        v.push_back(temp);
    }

    // 적절한 함수 사용하기

    for(const auto& it: v) {
        cout << it.age << " " << it.name << "\n";
    }

    return 0;
}