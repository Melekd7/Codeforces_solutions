#include <bits/stdc++.h>
using namespace std;
using ll=long long;
void solve(){
 
 ll a,b,n;
cin >>a>>b>>n;
vector<ll>x(n);
sort(x.begin(),x.end());
for(int i=0;i<n;i++){
   cin >>x[i];
  }
  ll s=b;
for(int i=0;i<n;i++){
   s+=min(x[i],a-1);
}
cout <<s<<'
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