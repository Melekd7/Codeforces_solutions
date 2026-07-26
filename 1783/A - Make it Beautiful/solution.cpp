#include <bits/stdc++.h>
using namespace std;
 
void solve() {
     int n;
      cin >>n;
      vector <int>a(n);
      cin >>a[0];
      int m=1;
      for(int i=1;i<n;i++){
        cin >>a[i];
        if(a[i]==a[0]){
            m++;
        }
      }
      if(m==n){
        cout <<"NO"<<'
';
      }
      else{
        cout <<"YES"<<'
';
        sort(a.rbegin(),a.rend());
        if (n%2==0){
        for(int i=0;i<n/2;i++){
        cout <<a[i]<<" ";
        cout <<a[n-i-1]<<" ";
         }}
         else{for(int i=0;i<=n/2;i++){
        cout <<a[i]<<" ";
        if(i<n/2){
        cout <<a[n-i-1]<<" ";
         }}
 
         }
      cout <<'
';}
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