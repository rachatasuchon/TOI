#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int n,m;
    cin >> n >> m;
    int a[n][m],sum=0;
    vector <int> Max(n);
    vector <double> Avg(n);
    
    for (int i = 0;i<n;i++) {
        for (int j = 0;j<m;j++) {
            cin >> a[i][j];
        }
    }
    for(int i = 0; i<n;i++) {
        Max[i] = *max_element(a[i], a[i]+m);   
        Avg[i] = accumulate(a[i], a[i]+m, 0.00) / m;
        sum += accumulate(a[i], a[i]+m, 0);
    }
    for (int i = 0; i < n; i++) {
        cout << "Team " << i+1 << ": " << "Average = " << fixed << setprecision(2) << Avg[i] << ", Max = " << fixed << setprecision(2) << Max[i] << '\n';
    }
    cout << "Total Score of All Teams = " << sum << '\n';
    return 0;
}