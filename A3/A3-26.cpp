#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int n, m;
    cin >> n >> m;
    char A[n][m], B[n][m], C[n][m];
    for (int i = 0 ; i < n ; i++) {
        for ( int j = 0 ; j < m ; j++) {
            cin >> A[i][j];
        }
    }
    for (int i = 0 ; i < n ; i++) {
        for ( int j = 0 ; j < m ; j++) {
            cin >> B[i][j];
        }
    }
    for (int i = 0 ; i < n ; i++) {
        for ( int j = 0 ; j < m ; j++) {
            if (A[i][j] == '-' && B[i][j] == '-') C[i][j] = '-';
            else if (A[i][j] == '+' && B[i][j] == '-') C[i][j] = '+';
            else if (A[i][j] == '-' && B[i][j] == 'x') C[i][j] = 'x';
            else if (A[i][j] == '+' && B[i][j] == 'x') C[i][j] = '*';
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j=0;j<m;j++) {
            cout << C[i][j];
        }
        cout << '\n';
    }
    return 0;
}