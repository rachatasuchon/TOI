#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    string text;
    bool foundB = false;
    int current=0, max=0,Pos=-1;
    cin >> text;
    for(int i=0;i<text.size();i++) {
        if(text[i]=='B'||text[i]=='b') {
            if(!foundB) {
                foundB = true;
                Pos = i;
            }
            int current =0;
            int j = i+1;
            while(j<text.size() && text[j]!='B' && text[j]!='b') {
                current++;
                j++;
            }  
        }   
    }
    if(max>=2) {
        cout<<"Yes "<<max;
    } else if(foundB) {
        for(int i=Pos+1;i<text.size();i++) {
            text[i] = 'U';
        }
        cout<<text;
    } else {
        string BUU = "BUU";
        for(int i=0;i<text.size();i++) {
            text[i] = BUU[i%3];
        }        
        cout<<BUU;
    }
    return 0;
}