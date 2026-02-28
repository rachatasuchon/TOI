#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    char word[4]; int count=0; string Pond="aeiou";
    cin>>word;
    for (int i=0;i<4;i++) {
        if (Pond.find(word[i])!=string::npos) count++;
    }
    cout<<count;
}
