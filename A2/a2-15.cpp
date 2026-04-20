#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int n1,n2,n3,price;
    cin >> n1 >> n2 >> n3 >> price;
    cout<<(n1+n2)*2*n3<<'\n'<<(n1+n2)*2*n3*price;
    return 0;
}