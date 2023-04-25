#include <bits/stdc++.h>

using namespace std;

typedef pair<int, int> pii;
typedef vector<pii> vpii;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int N, y;
  cin >> N;


  vpii plan_ba(N);
  vpii arrows_ba(N);

  for(int x = 1; x<=N; x++) {
    cin >> y;
    pii cod = make_pair(x, y);
    plan_ba[x-1] = cod;
  }

  for(int x = 0; x < N; x++) {
    
  }

  cout << plan_ba[0].first << " " << plan_ba[0].second ;
  return 0;
}