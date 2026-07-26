#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    int n,x;
    cin >>n>>x;
    vector <int> a(n);
    for (int i=0;i<n;i++){
        cin >>a[i];
    }
 int m=a[0];  
        for (int i=1;i<n;i++){
            m=max(m,a[i]-a[i-1]);
        }
        m=max(m,2*(x-a[n-1]));
        cout <<m<<'
';
    
}
 
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--) {
        solve();
        }
    return 0;
}