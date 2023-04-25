#include <bits/stdc++.h>

using namespace  std;


pair<int, int> pontoMedio(pair<int, int> pA, pair<int, int> pB ) {
  pair<int, int> pM;
  pM.first = (pA.first + pB.first) / 2;
  pM.second = (pA.second + pB.second) / 2;

  return pM;
}

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N, x, y;
  int ativacoes = 0;
  pair<int, int> p_inicial, destino;
  vector<pair<int, int>> quadrado(4); // [[0, 0], [0, 2**n], [2**n, 2**n], [2**n, 0]]
  cin >> N >> x >> y;


  // posição destino
  destino.first = x;
  destino.second = y;

  // posição inicial da particula
  p_inicial.first = pow(2, N - 1);
  p_inicial.second = pow(2, N - 1);

  // quadrado
  quadrado[0] = pair<int, int>(0,0); // A
  quadrado[1] = pair<int, int>(0, pow(2, N)); // B
  quadrado[2] = pair<int, int>(pow(2, N), pow(2, N)); // C
  quadrado[3] = pair<int, int>(pow(2, N ), 0); // D

while (p_inicial != destino) {

   
    // encontrar o ponto médio correspondente
    pair<int, int> proximo;
    if (destino.first > p_inicial.first) {
      if (destino.second > p_inicial.second) {
        // próximo é MC
        proximo = pontoMedio(quadrado[2], p_inicial);
      } else {
        // próximo é MD
        proximo = pontoMedio(quadrado[3], p_inicial);
      }
    } else {
      if (destino.second > p_inicial.second) {
        // próximo é MB
        proximo = pontoMedio(quadrado[1], p_inicial);
      } else {
        // próximo é MA
        proximo = pontoMedio(quadrado[0], p_inicial);
      }
    }

    p_inicial = proximo;  // atualiza posição
    ativacoes++;          // incrementa o número de ativações
}


  cout << ativacoes;
  return 0;
}