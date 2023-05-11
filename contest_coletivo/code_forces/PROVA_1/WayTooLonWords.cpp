#include<iostream>
#include<string>
using namespace std;

int main(){
  int n, tam;
  string palavra;
  cin >> n;


  for(int i = 0; i< n; i++){
    cin >> palavra;
    tam = palavra.size();
    if(tam > 10) {
      cout << palavra[0] << (tam - 2) << palavra[tam-1] << endl;
    }
    else{
      cout << palavra << endl;
    }
  }

  return 0;
}