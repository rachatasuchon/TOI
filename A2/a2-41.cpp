#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int n;
    string binary = "";
    string Octal = "";
    string Hexadecimal = "";
    cin >> n;
    int original_n = n;
    int temp = original_n;
    while(temp>0) {
        binary = to_string(temp%2) + binary;
        temp /= 2;
    }
    temp = original_n;
    while(temp>0) {
        Octal = to_string(temp%8) + Octal;
        temp /= 8;
    }
    temp = original_n;
    while(temp>0) {
        int rem = temp % 16;
        char digit = (rem < 10) ? '0' + rem : 'A' + (rem - 10);
        Hexadecimal = digit + Hexadecimal;
        temp /= 16;
    }
    cout<< binary << "\n" << Octal << "\n" << Hexadecimal << "\n";


}