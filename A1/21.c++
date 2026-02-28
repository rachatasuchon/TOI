#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int year;
    cin>>year;
    string ans = (year%4==0&&year%100!=0)? "yes":(year%400==0)? "yes":"no";
    cout<<ans;
}
