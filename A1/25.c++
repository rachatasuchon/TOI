#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    string value; char type;
    cin>>value>>type;
    if (type=='D'||type=='d') {
       if (value=='A'||value=='a') cout<<"ace of diamonds";
       if (value=='J'||value=='j') cout<<"jack of diamons";
       if (value=='Q'||value=='q') cout<<"queen of diamonds";
       if (value=='K'||value=='k') cout<<"king of diamons";
       else cout<<value<<" of diamonds";
    }
    else if (type=='H'||type=='h') {
       if (value=='A'||value=='a') cout<<"ace of hearts";
       if (value=='J'||value=='j') cout<<"jack of hearts";
       if (value=='Q'||value=='q') cout<<"queen of hearts";
       if (value=='K'||value=='k') cout<<"king of hearts";
       else cout<<value<<" of hearts";
    }
    else if (type=='S'||type=='s') {
    if (value=='A'||value=='a') cout<<"ace of spades";
       if (value=='J'||value=='j') cout<<"jack of spades";
       if (value=='Q'||value=='q') cout<<"queen of spades";
       if (value=='K'||value=='k') cout<<"king of spades";
       else cout<<value<<" of spades";
    }
    else if (type=='C'||type=='c') {
       if (value=='A'||value=='a') cout<<"ace of clubs";
       if (value=='J'||value=='j') cout<<"jack of clubs";
       if (value=='Q'||value=='q') cout<<"queen of clubs";
       if (value=='K'||value=='k') cout<<"king of clubs";
       else cout<<value<<" of clubs";
    }
}
