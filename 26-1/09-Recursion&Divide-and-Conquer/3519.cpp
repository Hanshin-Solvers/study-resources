#include <iostream>
#include <vector>

using namespace std;

int n;
vector<int> v;

void merge(int left, int right) {
    if(left >= right) return; // 기저 조건
    else {
        int mid = (left + right) / 2;

        // 분할 정복
        merge(left, mid);
        merge(mid + 1, right);

        // 결합
        int i = left;
        int j = mid + 1;
        vector<int> temp(right - left + 1);

        for (int k = 0; k < temp.size(); k++) {
            if (i <= mid && (j > right || v[i] <= v[j])) temp[k] = v[i++];
            else temp[k] = v[j++];
        }

        // 복사
        for (int t = 0; t < temp.size(); t++) {
            v[left + t] = temp[t];
        }

        for (int i = 0; i < n; i++) {
            cout << v[i] << " ";
        }

        cout << "\n";
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int num;
    
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> num;

        v.push_back(num);
    }

    merge(0, n - 1);

    return 0;
}