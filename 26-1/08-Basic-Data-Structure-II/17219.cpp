#include <iostream>
#include <map>
#include <string>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    string site, pwd;
    map<string, string> pwdmap;

    cin >> n >> m;

    for(int i = 0; i < n; i++) {
        cin >> site >> pwd;

        pwdmap.insert({site, pwd});
    }

    for(int i = 0; i < m; i++) {
        cin >> site;

        cout << pwdmap[site] << "\n";
    }
    
    return 0;
}