#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    string name,lname; int age;
    cin>>name>>lname>>age;
    int digit = age % 10;
    if (name.length()>5&&lname.length()>5) {
       cout<<name.substr(0,2)<<lname[lname.length()-1]<<digit;
    } else cout<<name[0]<<age<<lname[lname.length()-1];
}
