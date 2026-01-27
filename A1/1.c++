#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    string name,lname;
    cin>>name>>lname;
    cout<<"Hello "<<name<<" "<<lname<<'\n';
    for (int i=0;i<name.length()&&i<=1;i++) {
         cout<<name[i];
    }
    for (int i=0;i<lname.length()&&i<=1;i++) {
         cout<<lname[i];
    }
    return 0;
}    