#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    string name,lname,ch; int age;
    cin>>name>>lname>>age;
    string ans = (name.length()>5&&lname.length()>5)? ch=name.substr(0,2)+string(1, lname.back())+to_string(age):
                ch=name.substr(0,1)+to_string(age)+string(1, lname.back());
    cout<<ans;
}