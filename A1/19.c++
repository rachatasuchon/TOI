#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int n1,n2,n3;
    cin>>n1>>n2>>n3;
    string ans = (n1==n2&&n2==n3)? "all the same":
                 (n1!=n2&&n2!=n3&&n1!=n3)? "all different":"neither";
    cout<<ans;                
}
