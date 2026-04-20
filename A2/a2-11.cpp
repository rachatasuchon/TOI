#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    set<int> sum;
    vector<int> ka;
    for (int i = 0; i < 10; i++) {
        int a;
        cin >> a;
        if(sum.find(a) == sum.end()) {
            sum.insert(a);
            ka.push_back(a);
        }
    }
    for(int x: ka) {
        cout << x << " ";
    }
    
    return 0;
}