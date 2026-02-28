#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int temp; char unit;
    cin>>temp>>unit;
    if (unit=='C'||unit=='c') {
       if (temp<=0){ cout<<"solid";}
       else if (temp>=100){ cout<<"gas";}
       else cout<<"liquid";}
    else if (unit=='F'||unit=='f') {
       if (temp<=32){ cout<<"solid";}
       else if (temp>=212){ cout<<"gas";}
       else cout<<"liquid";}
}
