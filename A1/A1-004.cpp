#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int test,mid,last;
    string grade;
    cin>>test>>mid>>last;
    test = (test>=5&&test<=10)? 1:(test>10||test<0)? 2:0; 
    mid = (mid>=20&& mid<=40)? 1:(mid>40||mid<0)? 2:0;
    last = (last>=25&& last<=50)? 1:(last>50||last<0)? 2:0;
    if (test==1&&mid==1&&last==1) {
        cout<<"pass";
    } else if (test==2||mid==2||last==2) {
        cout<<"error";
    } else cout<<"fail";
    return 0;
}