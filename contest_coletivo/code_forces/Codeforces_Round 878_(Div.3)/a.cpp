#include<iostream>
#include<vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    for (int i = 0; i < n; i++) {
        int t;
        cin >> t;
        vector<char> p(t); // Correção: Substituído "char[t] p;" por "vector<char> p(t);"

        for (int j = 0; j < t; j++) {
            cin >> p[j];
        }

        vector<char> vet2;

        char f = p[0];

        for (int j = 1; j < t; j++) {
            if (f == p[j]) {
                vet2.push_back(f);
                f = p[j + 1]; 
                j++;
            }
        }

        for (auto ptr = vet2.begin(); ptr != vet2.end(); ptr++) {
            cout << *ptr;
        }
        cout << "\n";
    }
    
    return 0;
}
