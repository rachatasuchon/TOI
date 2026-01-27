#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int coin,one,two,five,ten;
    cin>>coin;
    ten = coin/10;
    coin -= ten*10;
    five = coin/5;
    coin -= five*5;
    two = coin/2;
    coin-= two*2;
    one = coin;
    cout<< "10 = "<<ten<<'\n'<<"5 = "<<five<<'\n'<<"2 = "<<two<<'\n'<<"1 = "<<one;
    return 0;
}