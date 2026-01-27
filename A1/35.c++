#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int N,sum=0;
    cin>>N;
    for (int i=0;i<N;i++) {
        sum += (N-i)*(N-i);
    }
    cout<<sum;
}