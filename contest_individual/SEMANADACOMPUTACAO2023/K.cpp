#include <bits/stdc++.h>
using namespace std;

#define a first
#define b second
#define pb push_back
#define mp make_pair
#define sz(x) int(x.size())
#define all(x) x.begin(), x.end()
#define FOR(i, n) for(int i=0; (i) < int(n); (i)++)


typedef unsigned long long ull;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> ii;

#include <bits/stdc++.h>

using namespace std;


void f(vector<vector<int>>& ans, int i, int j){
    if(ans[i][j] == -2)
        return;

    if(ans[i][j] == 1){
        if(ans[i-1][j]  == -1 || 
        ans[i+1][j]  == -1 || 
        ans[i][j-1]  == -1 || 
        ans[i][j+1]  == -1){
            return;
        }

        if(ans[i-1][j] == 0){
            ans[i-1][j] = 1;
            f(ans, i-1, j);
        }

        if(ans[i+1][j] == 0){
            ans[i+1][j] = 1;
            f(ans, i+1, j);
        }

        if(ans[i][j-1] == 0){
            ans[i][j-1] = 1;
            f(ans, i, j-1);
        }

        if(ans[i][j+1] == 0){
            ans[i][j+1] = 1;
            f(ans, i, j+1);
        }
    }

    return;
}

int main() {
    int w, h;

    cin >> w >> h;

    char m[h][w];

    vector<vector<int>> ans(h);

    ii player;
    for(int i = 0; i < h; ++i){
        string line;
        cin >> line;
        for(int j = 0; j < w; ++j){
            m[i][j] = line[j];
            if(m[i][j] == 'P'){
                player = {i, j};
                ans[i].pb(1);
            }else if(m[i][j] == '.' || m[i][j] == 'G')
                ans[i].pb(0);
            else if(m[i][j] == '#')
                ans[i].pb(-2);
            else
                ans[i].pb(-1);
        }
    }

    f(ans, player.a, player.b);

    int gold = 0;
    for(int i = 0; i < h; ++i)
        for(int j = 0; j < w; ++j)
            if(m[i][j] == 'G' && ans[i][j] == 1)
                gold++;


    cout << gold << '\n';

    return 0;
}