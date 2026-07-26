#include <bits/stdc++.h>
using namespace std;
void solve() {
    int n;
    cin >> n;
    for (int i=1;i<=n;i++){
        cout <<2*i-1<<(i==n?"":" ");
    }
    cout << "
";
}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}