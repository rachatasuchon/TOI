#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int num_tree,cnt=0; cin>>num_tree;
    int tree[num_tree];
    for (int i;i<num_tree;i++) {
        cin>>tree[i];
    }
    for (int i;i<num_tree;i++) {
        if(tree[i]>tree[i+1]&&tree[i]>tree[i-1]) cnt++;
        else if(i==0&&tree[0]>tree[1]) cnt++;
        else if(i==num_tree-1&&tree[num_tree-1]>tree[num_tree-2]) cnt++;
    } 
    cout<<cnt;
}