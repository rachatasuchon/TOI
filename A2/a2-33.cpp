#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int Hin,Hout,Min,Minout;
    char dot;
    cin >> Hin>> dot >> Min;
    cin >> Hout >> dot >> Minout;
    if(Hin<0||Hin>23||Min<0||Min>59||Hout<0||Hout>23||Minout<0||Minout>59) {
        cout << "ERROR"; return 0;
    }
    int time = (Hout-Hin)*60 + (Minout-Min);
    if(time<15) {
        cout<<"FREE";
    } else if(time<=60&&time>15) {
        cout<<"25";
    } else if(time<=120&&time>60) {
        cout<<"50";
    } else if(time<=180&&time>120) {
        cout<<"80";
    } else if(time<=240&&time>180) {
        cout<<"110";
    } else if(time<=300&&time>240) {
        cout<<"145";
    } else if(time<=360&&time>300) {
        cout<<"180";
    } else if(time<0) {
        cout<<"ERROR"; return 0;
    } else {
        cout<<"250";
    }
    

    return 0;
}