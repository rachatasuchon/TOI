#include<bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int y1,m1,d1,y2,m2,d2;
    cin>>y1>>m1>>d1>>y2>>m2>>d2;
    if (y1<y2) {
       cout<<"1";
    } else if (y1>y2) {
       cout<<"2";
    } else if (y1==y2) {
       if (m1<m2) {
          cout<<"1";
       } else if (m1>m2) {
          cout<<"2";
       } else {
          if (d1<d2){
             cout<<"1";
          } else if (d1>d2) {
             cout<<"2";
          } else cout<<"0";
       }
    }
    return 0;
}