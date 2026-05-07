#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int n,m;
    cin >> n >> m;
    char a[n][m],b[n][m];
    for ( int i = 0; i<n;i++) {
        for (int j = 0;j<m;j++) {
            cin >> a[i][j];
        }
    }
    for ( int i = 0; i<n;i++) {
        for (int j = 0;j<m;j++) {
            if(a[i][j] == '*') b[i][j] = '*';
            else if (i > 0 && a[i-1][j] =='*') b[i][j] = '*';
            else b[i][j] = '-';
        }
    }
    for ( int i = 0; i<n;i++) {
        for (int j = 0;j<m;j++) {
            cout << b[i][j] << ' ';
        }
        cout << '\n';
    }
    return 0;
}