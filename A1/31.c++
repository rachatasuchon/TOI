#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    string num;
    cin>>num;
    for (int i=num.length()-3;i>0;i-=3) {
        num.insert(i,",");
    }
    cout<<num;
}
