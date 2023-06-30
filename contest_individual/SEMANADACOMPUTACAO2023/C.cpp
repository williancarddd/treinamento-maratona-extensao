#include <bits/stdc++.h>

using namespace std;


int main() {
    ios::sync_with_stdio(false); cin.tie(0); 

    int L;
    float S = 0, E;
    char OP;
    cin >> L;
    cin >> OP;

    for(int i = 0; i < 12; i++) {
        if(S != 0) break;
        for (int j = 0; j < 12; j++) {
            cin >> E;
            if (i == L) S += E;
        }
    }

    if(OP == 'S') cout << fixed << setprecision(1) << S <<  endl;
    if(OP == 'M') cout << fixed << setprecision(1) << (S / 12) <<  endl;
    
    return 0;
}