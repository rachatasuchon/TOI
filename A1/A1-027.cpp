#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    char word[6];
    cin>>word;
    for (int i=0;i<6;i++) { 
        word[i]=tolower(word[i]);}
    for (int i=0; i<3;i++) {
        char chr=word[i];
        word[i]=word[4-i];
        word[4-i]=chr;
    }
    cout<<word;
}