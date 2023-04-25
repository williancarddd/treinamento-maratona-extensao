// Challeng A 2022 ICPC Regional Contest

/**
 * 
 * 
 * abaababa
 * abaabbaaab -> 
*/

#include <bits/stdc++.h>
using namespace std;


int main() {
  ios::sync_with_stdio(0), cin.tie(0);

  int N;
  int  monotone = 0;


  cin >> N;

  char string_in[N];

  for (int s = 0; s < N; s++){
    cin >> string_in[s];
  }

  int sequence_c = 0;
  for(int i = 0; i < N; i++) {
    if(string_in[i] == 'a') {
      sequence_c += 1;
    } 
    if (string_in[i] == 'b' || i == N - 1) {
      if (sequence_c > 1) {
        monotone += sequence_c;
      }
      sequence_c = 0;
    }
  }

  cout << monotone;    
  return 0;
}