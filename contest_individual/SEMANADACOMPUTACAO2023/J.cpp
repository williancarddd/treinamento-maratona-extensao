#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(0);

    int N;
    char C;
    cin >> N;

    if(N <= 0) C = 'E';
    if(N >= 1 && N <= 35) C = 'D';
    if(N >= 36  && N <= 60 ) C = 'C';
    if(N >= 61  && N <= 85 ) C = 'B';
    if(N >= 86  && N <= 100 ) C = 'A';
    
    cout << C << endl;
    return 0;
}