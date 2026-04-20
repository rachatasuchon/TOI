#include <bits/stdc++.h>
using namespace std;


int main() {
    cin.tie(0)->sync_with_stdio(0);
    int n1,n2;
    string result;
    cin>>n1>>n2;
    result = (n1%n2==0)? "yes":"no";
    cout<<result; 
    return 0;
}