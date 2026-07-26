#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int n;
    cin >> n;
    int cnt_even = 0, cnt_odd = 0;
 
    for (int i = 0; i < n; ++i) {
        long long x;
        cin >> x;
        if (x % 2 == 0) cnt_even++;
        else cnt_odd++;
    }
 
    cout << min(cnt_even, cnt_odd) << '
';
    return 0;
}