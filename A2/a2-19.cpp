    #include <bits/stdc++.h>
    using namespace std;

    int main() {
        cin.tie(0)->sync_with_stdio(0);
        string text;
        bool foundB = false;
        int max=0,current=0,Pos=-1;
        cin >> text;
        for(int i=0;i<text.size();i++) {
            if(text[i]=='B'||text[i]=='b') {
                if(!foundB) {
                    foundB=true;
                    Pos=i;
                }
            current=0;
            int j=i+1;
            while(j<text.size()&&(text[j]=='U'||text[j]=='u')) {
                current++;
                j++;
            }        
            if(current>max) {max=current;}
            }
        }  
        if(max>=2) {
            cout<<"Yes "<<max;
        }else if(foundB) {
            for (int j=Pos+1;j<text.size();j++) {
                text[j]='U';
            }
            cout<<text;
        } else {
            string BUU = "BUU";
            for(int i=0;i<text.size();i++) {
                cout<<BUU[i%3];
            }
        }
        return 0;
    }