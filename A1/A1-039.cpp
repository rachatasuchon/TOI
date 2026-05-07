#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int n; long long fact=1;
    cin>>n;
    for (int i=1;i<=n;i++) {
        fact *= i;
    }
    cout<<fact;
    return 0;
}