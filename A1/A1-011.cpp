#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);

    char text[6];
    cin >> text;
    for (int i = 0; text[i] != '\0'; i++) {
        text[i] = toupper(text[i]);
    }

    int count = 1;
    for (int i = 0; text[i] != '\0'; i++) {
        if (text[i] == text[i+1]) {
            count++;
        } else {
            cout << count << text[i];
            count = 1;
        }
    }
    return 0;
}
