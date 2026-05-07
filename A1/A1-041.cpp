#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int mae,sum=0;
    cin>>mae;
    for (int i=1;i<=12;i++) {
        sum = mae*i;
        cout<<mae<<" * "<<i<<" = "<<sum<<'\n';
    }
    return 0;
}