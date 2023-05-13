#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false); cin.tie(0);

  int t, n, m, min_time_1, min_time_0;
  char s[3];
  cin >> t;

  while(t--) {
    cin >> n;
    min_time_1 = 0, min_time_0 = 0;
    while(n--) {
      cin >> m;
      cin >> s;
      if(s[1] == '0' && m > min_time_1) {
        cout << "menor tempo é " << m;
        min_time_1 = m;
      }
      if(s[0] == '1' && m > min_time_0) {
        min_time_0 = m;
      }
    }
    cout << (min_time_0 + min_time_1 ) << endl;
  }
}