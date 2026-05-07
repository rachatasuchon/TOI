#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int n,steak=0;
    cin >> n;
    string aeiou = "aeiouAEIOU";
    vector <string> S(n);
    
    
    cin.ignore(); // เพิ่มตรงนี้
    for (int i = 0; i < n; i++) {
        getline(cin, S[i]);
    }

    for (int i = 0; i < n; i++) {
        int count = 0, steak = 0, max_steak = 0; // reset ทุกบรรทัด
        for (int j = 0; j < S[i].length(); j++) { // วนทุกตัว
            if (aeiou.find(S[i][j]) != string::npos) {
                count++;
                steak++;
                max_steak = max(max_steak, steak);
            } else {
                steak = 0;
            }
        }
        cout << "Line " << i+1 << ": vowels = " << count << ", max_consecutive = " << max_steak << '\n';
    }

    return 0;
}