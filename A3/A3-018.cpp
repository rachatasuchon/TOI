#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int L,N,sum=0,F=0;
    cin >> L >> N;
    for (int i = 1; i<=L;i++) {
        sum += i*i;
    }
    sum -= N;
    for (int i = L; i >= 1; i--) {
    if (sum <= 0) break;
    if (sum >= i*i) {
        sum -= i*i;
        F++;
    } else {
        F++; 
        break;
    }
}
    cout << F << '\n';
    return 0;
}