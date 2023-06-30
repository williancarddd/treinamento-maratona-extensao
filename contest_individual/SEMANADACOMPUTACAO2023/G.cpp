#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(0);

    int x, y, N;
    cin >> N;
    while(N--) {
        cin >> x >> y;

        cout << (x*y) / 2 << " cm2" << endl;
    }
    
    return 0;
}