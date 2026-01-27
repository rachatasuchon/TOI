#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    char ch; int num;
    cin>>ch>>num;
    string ans = (ch=='H'&&num==4567)? "safe unlocked":(ch!='H'&&num==4567)? "safe locked - change char":(ch=='H'&&num!=4567)? "safe locked - change digit":"safe locked";
    cout<<ans;
    return 0;
}