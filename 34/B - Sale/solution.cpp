#include <bits/stdc++.h>
using namespace std;
 
void solve() {
      int n,m;
     cin>>n>>m;
     vector <int> a(n);
     for (int i=0;i<n;i++){
        cin>>a[i];
     }
     sort(a.begin(),a.end());
     int s=0;
     for(int i=0;i<m;i++){
        if(a[i]<=0){
        s+=a[i];}
     }
     cout <<-s<<'
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