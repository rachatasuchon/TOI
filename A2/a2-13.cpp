#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    char buble,tea;
    int cc,sweet,vol;
    cin>>buble>>vol>>tea>>sweet>>cc;
    if(buble == 'H') {vol *= 5;}
    if(buble == 'O') {vol *= 3;}
    if(buble == 'J') {vol *= 2;}
    if(tea == 'R') {
        if(sweet == 1) {cc *= 12;}
        if(sweet == 2) {cc *= 18;}
        if(sweet == 3) {cc *= 25;}
    } else if(tea == 'T') {
        if(sweet == 1) {cc *= 15;}
        if(sweet == 2) {cc *= 20;}
        if(sweet == 3) {cc *= 30;}
    } else if(tea == 'M') {
        if(sweet == 1) {cc *= 10;}
        if(sweet == 2) {cc *= 15;}
        if(sweet == 3) {cc *= 20;}
    }
    cout << cc+vol;
    return 0;
}