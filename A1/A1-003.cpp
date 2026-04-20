#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int n1,n2,n3;
    cin >> n1 >> n2 >> n3;
    int mx = max(n1,max(n2,n3));
    cout<<mx;
    return 0;
}