#include <bits/stdc++.h>
using namespace std;
 
void solve() {
      int n,k;
     cin>>n>>k;
     int i=0;
     while(i<=n && (i*(i+1)/2)*5+k<=4*60){
        i++;
     }
     cout <<i-1<<'
';
    }
 
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    t=1;
    //cin>>t;
    while(t--) {
        solve();
        }
    return 0;
}