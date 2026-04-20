#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    char size,type,topping;
    int vol=0,price=0;
    cin >> size >> type >> topping;
    if(topping != 'N') {
        cin >> vol;
    }
    if (type=='R') {
        if(size=='S') {price=60;}
        else if(size=='M') {price=80;}
        else if(size=='L') {price=100;}
    }else if (type=='T') {
        if(size=='S') {price=80;}
        else if(size=='M') {price=100;}
        else if(size=='L') {price=120;}
    }
    if(topping=='P') {vol*=15;}
    else if(topping=='E') {vol*=10;}
    else if(topping=='N') {vol=0;}
    cout<<price+vol;
    return 0;
}