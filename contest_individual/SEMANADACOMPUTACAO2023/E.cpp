#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(0);
    int N, T = 0;
    bool R = true;
    string A, B;
    cin >> N;

    while(N--) {
        cin >> A >> B;
        T = A.length() - B.length();
        for(int i = 0; i < B.length(); i++) {
            if(A[T + i] != B[i]) {
                R = false;
                break;
            };
        }
        if(R) {
            cout << "encaixa" << endl;
        } else {
            cout << "nao encaixa" << endl;
        }
        R = true;
    }
    
    return 0;
}