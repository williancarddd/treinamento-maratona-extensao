#include <bits/stdc++.h>

using namespace std;


int main() {
  string sequence;
  int maior_sequencia = 0;
  int sequencia_atual = 0;
  int lenString = sequence.size();
  for (int x = 0; x<lenString; x++){
    if(x == lenString -1) {
      break;
    }
    if( sequence[x] == sequence[x+1]){
      sequencia_atual += 1;
      if(maior_sequencia < sequencia_atual) maior_sequencia=sequencia_atual;
    }
  }
  cout << maior_sequencia+1<< endl;
  return 0;
}