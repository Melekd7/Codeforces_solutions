#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fast ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
void solve() {
    ll n;
    cin >> n;
    string s = to_string(n);
    ll power = 1;
    vector<ll> round_numbers;
    for (int i = s.length() - 1; i >= 0; i--) {
        int digit = s[i] - '0';
        if (digit != 0) {
            round_numbers.push_back(digit * power);
        }
        power *= 10;
    }
    cout << round_numbers.size() << "
";
    for (ll num : round_numbers) {
        cout << num << " ";
    }
    cout << "
";
}
 
int main(){
    fast;
    ll t = 1;
    cin >> t;
    
    while(t--){
        solve();
    }
    
    return 0;
}