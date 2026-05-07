#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int n,count=0; string vowels="AEIOU";
    cin>>n;
    char chr[n];
    for(int i=0;i<n;i++) {
        cin>>chr[i];
        chr[i]=toupper(chr[i]);
        if(vowels.find(chr[i])!=string::npos) count++;
    }
    cout<<count;
}