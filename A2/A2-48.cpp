#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int n;
    cin >> n;
    
    vector<int> score(n);
    for(int i = 0; i < n; i++) cin >> score[i];
    
    cout << "Student:";
    for(int i = 1; i <= n; i++) cout << " Student" << i;
    cout << '\n';
    
    int Max = *max_element(score.begin(), score.end());
    int Min = *min_element(score.begin(), score.end());
    double avg = accumulate(score.begin(), score.end(), 0.0) / n;
    
    cout << "Highest score: " << Max << '\n';
    cout << "Lowest score: " << Min << '\n';
    cout << "Average score: " << fixed << setprecision(1) << avg << '\n';
    cout << "Students who scored above average:\n";
    
    for(int i = 0; i < n; i++) {
        if(score[i] > avg) cout << "Student " << i+1 << '\n';
    }
    
    return 0;
}