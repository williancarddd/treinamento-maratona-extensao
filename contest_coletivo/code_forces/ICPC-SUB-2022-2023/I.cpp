#include <bits/stdc++.h>

using namespace std;

#define MAX 8

int bits_s[MAX];

int main() {
  ios::sync_with_stdio(false); cin.tie(0);
  bool d = false;

  for (int i = 0; i < MAX; i++){
    cin >> bits_s[i];
    d = bits_s[i] == 9;
  }

  cout << (d ? "S" : "F");

  return 0;

}