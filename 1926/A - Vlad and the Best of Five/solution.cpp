#include <bits/stdc++.h>
using namespace std;
 
void solve(){
 string s;
 cin >>s;
 sort(s.begin(),s.end());
 cout <<s[2]<<'
';
 
}
 
 
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    t=1;
    cin>>t;
    while(t--) {
        solve();
        }
    return 0;
}