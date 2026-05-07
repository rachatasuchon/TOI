#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int n, m, num_bomb;
    cin >> n >> m >> num_bomb;
    char map[n][m];
    int r_bomb[num_bomb], c_bomb[num_bomb];
    for (int i = 0 ; i < n ; i++) {
        for ( int j = 0 ; j < m ; j++) {
            map[i][j] = '0';
        }
    }
    for (int i = 0 ; i < num_bomb   ; i++) {
            cin >> r_bomb[i] >> c_bomb[i];
            map[r_bomb[i]][c_bomb[i]] = 'x';
    }
    for (int i = 0 ; i < n ; i++) {
        for (int j = 0 ; j < m ; j++) {
            if (map[i][j] != 'x') {
                if (i>0 && j>0 && map[i-1][j-1] == 'x') map[i][j]++;
                if (i>0 && map[i-1][j] == 'x') map[i][j]++;
                if (i>0 && j<m-1 && map[i-1][j+1] == 'x') map[i][j]++;
                if (j>0 && map[i][j-1] == 'x') map[i][j]++;
                if (j<m-1 && map[i][j+1] == 'x') map[i][j]++;
                if (i<n-1 && j>0 && map[i+1][j-1] == 'x') map[i][j]++;
                if (i<n-1 && map[i+1][j] == 'x') map[i][j]++;
                if (i<n-1 && j<m-1 && map[i+1][j+1] == 'x') map[i][j]++;
}
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j=0;j<m;j++) {
            cout << map[i][j]<< " ";
        }
        cout << '\n';
    }

    return 0;
}