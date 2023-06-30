#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(0);
    int  i = 0, minI;
    vector<int> v(2);
    cin >> v[0];
    cin >> v[1];

    minI = *min_element(v.begin(), v.end());

    while(abs(v[0] - v[1]) > i++){
        if(((minI + i ) % 5 == 2) || ((minI + i ) % 5 == 3)) {
            cout <<  (minI + i ) << "\n";
        }
    }
    
    
    return 0;
}