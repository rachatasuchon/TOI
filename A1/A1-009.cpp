#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int mid,last,sum;
    cin>>mid>>last;
    sum = mid+last;
    if (sum>=50) {
        cout<<sum<<'\n'<<"pass";
    } else if (sum>100||sum<0) {
        cout<<"error";
    } else cout<<sum<<'\n'<<"fail";
    return 0;
}