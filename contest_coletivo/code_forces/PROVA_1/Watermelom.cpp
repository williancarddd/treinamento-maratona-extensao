#include <bits/stdc++.h>
using namespace std;

int main() {
  int peso;
  ios::sync_with_stdio(false); cin.tie(0);
  cin >>peso;
  if (peso!=2){
    cout << ((peso%2==0) ? "YES" : "NO");
  }
  else{
    cout <<("NO");
  }
}