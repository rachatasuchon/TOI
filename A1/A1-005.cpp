#include <bits/stdc++.h>
using namespace std;

int main () {
    cin.tie(0)->sync_with_stdio(0);
    int month,day;
    cin>>month>>day;
    switch (month) {
    case 1:
        if (day>0&&day<31) {
        cout<<"winter"; }
        break;
    case 2:
        if (day>0&&day<29) {
        cout<<"winter"; }
        break;
    case 3:
        if (day>0&&day<31) {
            if (day<21) {
            cout<<"winter";
        } else
            cout<<"spring"; }
        break;
    case 4:
        if (day>0&&day<30) {
        cout<<"spring"; }
        break;
    case 5:
        if (day>0&&day<31) {
        cout<<"spring"; }
        break;
    case 6:
        if (day>0&&day<31) {
            if (day<21) {
            cout<<"spring";
        } else cout<<"summer"; }
        break;
    case 7:
        if (day>0&&day<31) {
        cout<<"summer"; }
        break;
    case 8:
        if (day>0&&day<31) {
        cout<<"summer"; }
        break;
    case 9:
        if (day>0&&day<31) {
            if (day<21) {
            cout<<"summer";
        } else cout<<"fall"; }
        break;
    case 10:
        if (day>0&&day<31) {
        cout<<"fall"; }
        break;
    case 11:
        if (day>0&&day<31) {
        cout<<"fall"; }
        break;
    case 12:
        if (day>0&&day<31) {
            if (day<21) {
            cout<<"fall";
        } else cout<<"summer"; }
        break;
    }
    return 0;
}