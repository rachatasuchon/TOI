#include <bits/stdc++.h>
using namespace std;
#define modulo (1 << 15) + 9

int main() {
    cin.tie(0)->sync_with_stdio(0);
    long long A[3][3],B[3][3],C[3][3];
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) cin >> A[i][j];
    }
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) cin >> B[i][j];
    }
    for (int i =0;i<3;i++) {
        for(int j=0;j<3;j++) {
            int n = 0;
            C[i][j] = (A[i][n] * B[n][j]) + (A[i][n+1] * B[n+1][j]) + (A[i][n+2] * B[n+2][j]);
            C[i][j] %= modulo;
        }
    }
    for (int i =0;i<3;i++) {
        for (int j =0;j<3;j++) {
            cout << C[i][j] << ' ';
        }
        cout << '\n';
    }

    return 0;
}