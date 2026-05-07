#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int n;
    cin>>n;
    vector<pair<int, string>> roman = {
        {1000, "M"},
        {900,  "CM"},
        {500,  "D"},
        {400,  "CD"},
        {100,  "C"},
        {90,   "XC"},
        {50,   "L"},
        {40,   "XL"},
        {10,   "X"},
        {9,    "IX"},
        {5,    "V"},
        {4,    "IV"},
        {1,    "I"}
    };

    string result = "";

    for (auto &p : roman) {
        while (n >= p.first) {
            result += p.second;
            n -= p.first;
        }
    }

    cout << result;
    return 0;
}