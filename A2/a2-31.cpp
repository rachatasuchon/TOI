#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int n,times,wrong=0;
    cin >> n;
    vector<char> a(n);
    vector<char> b(n);
    vector<int> numchromosomes(n), Poschromosomes(n);
    vector<char> changechromosomes(n);
    for(int i=0;i<n;i++) {
        cin>> a[i];
    }
    for(int i=0;i<n;i++) {
        cin >> b[i];
    }
    cin>> times;
    for(int i=0;i<times;i++) {
        cin >> numchromosomes[i] >> Poschromosomes[i] >> changechromosomes[i];
    }
    for(int i=0;i<times;i++) {
        if(numchromosomes[i] == 1) {
            a[Poschromosomes[i]] = changechromosomes[i];
        }
        else {
            b[Poschromosomes[i]] = changechromosomes[i];
        }
    }
    for(int i=0;i<n;i++) {
        if(!((a[i] == 'A' && b[i] == 'T') || (a[i] == 'T' && b[i] == 'A') || (a[i] == 'C' && b[i] == 'G') || (a[i] == 'G' && b[i] == 'C'))) {
            wrong++;
        } 
    }
    for(int i=0;i<n;i++) {
        cout << a[i] << ' ';
    }
    cout << '\n';
    for(int i=0;i<n;i++) {
        cout << b[i] << ' ';
    }
    cout << '\n' << wrong;
    return 0;
}