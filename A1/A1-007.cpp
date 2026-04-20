#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    char word;
    cin>>word;
    if (strchr("aeiouAEIOU",word)) {
        cout<<"yes";
    } else cout<<"no";
    return 0;
}