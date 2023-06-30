#include <bits/stdc++.h>

using namespace std;

int findFirstOcurLetter(string s) {
    for (int i = 0; i < s.length(); i++) {
        if(s[i] >= 'A' && s[i] <= 'z') {
            return i;
        }
    }
    return -1;
}
int main() {
    ios::sync_with_stdio(false); cin.tie(0);
   
    string S;
    

    while(getline(cin, S)) {
        bool beforeUpper = false;
        int fL = findFirstOcurLetter(S);
        if(S[fL] >= 'a' &&  S[fL] <= 'z') {
            S[fL] = toupper(S[fL]);
            beforeUpper = true;
            for(int i = fL + 1; i < S.length(); i++ ) {
                if(S[i] == ' ') continue;
                if (beforeUpper) {
                    S[i] = tolower(S[i]);
                    beforeUpper = false;
                } else {
                    S[i] = toupper(S[i]);
                    beforeUpper = true;
                }
            }
        } else {

            beforeUpper = true;
            for(int i = fL + 1; i < S.length(); i++ ) {
                if(S[i] == ' ') continue;
                if (beforeUpper) {
                    S[i] = tolower(S[i]);
                    beforeUpper = false;

                } else {
                    S[i] = toupper(S[i]);
                    beforeUpper = true;
                }
            }
        }
        cout << S << endl;
    }
    
    return 0;
}