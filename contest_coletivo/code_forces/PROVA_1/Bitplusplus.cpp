#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false); cin.tie(0);
  string operacao;
  int n;
  cin >> n;
  int resultado=0;
  for (int i=0;i<n;i++){
    cin >> operacao;
    if (operacao[1]== '+')
      resultado++;
    else
      resultado--;
  } 
  cout << resultado;

  return 0;
}