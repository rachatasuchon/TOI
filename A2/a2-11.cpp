#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    set<int> n; int count;
    for(int i=0;i<10;i++){
        cin>>count;
        n.insert(count);
    }
    for(int i:n){
        cout<<i<<'\n';
    }
}