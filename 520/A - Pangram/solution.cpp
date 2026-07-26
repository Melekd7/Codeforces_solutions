#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;
 
    string f = "abcdefghijklmnopqrstuvwxyz";
    int m = 0;
 
    for (auto &c : s) c = tolower(c);
 
    for (int i = 0; i < (int)f.length(); i++) {
        for (int j = 0; j < n; j++) {
            if (f[i] == s[j]) {
                m++;
                break;
            }
        }
    }
 
    if (m == 26) {
        cout << "YES";
    } else {
        cout << "NO";
    }
}
 
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
 
    int t = 1;
    while (t--) {
        solve();
    }
}