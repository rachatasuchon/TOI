#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int n;
    cin>> n;
    vector<int> a(n);
    for(int i=0; i<n; i++) cin>> a[i];
    int max = *max_element(a.begin(), a.end());
    int cnt = count(a.begin(), a.end(), max);
    cout<< max << '\n' << cnt;
    return 0;
}