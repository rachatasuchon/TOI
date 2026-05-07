#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    string s,aeiou="aeiouAEIOU";
    int a=0,e=0,i=0,o=0,u=0;
    getline(cin, s);
    for ( int j = 0; j < s.size(); j++) {
        if (aeiou.find(s[j]) != string::npos) {
            if (s[j] == 'a' || s[j] == 'A') a++;
            else if (s[j] == 'e' || s[j] == 'E') e++;
            else if (s[j] == 'i' || s[j] == 'I') i++;
            else if (s[j] == 'o' || s[j] == 'O') o++;
            else if (s[j] == 'u' || s[j] == 'U') u++;
        }
    }
    if (a > 0) cout << "a: " << a << '\n';
    if (e > 0) cout << "e: " << e << '\n';
    if (i > 0) cout << "i: " << i << '\n';
    if (o > 0) cout << "o: " << o << '\n';
    if (u > 0) cout << "u: " << u << '\n';
    return 0;
}