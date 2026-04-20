#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            if (j == 1 || i == j || i == n ) {
                cout << "0 ";
            } 
            
            else {
                cout << "1 ";
            }
        } 
        cout << '\n';
    }
    return 0;
}