#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(0);

    string L;
    getline(cin, L);

    if(L.length() <= 80) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}