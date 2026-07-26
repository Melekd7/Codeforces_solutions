#include <bits/stdc++.h>
using namespace std;
 
void solve(){
  long long r,x,y,a,b;
  cin >>r>>x>>y>>a>>b;
  double d=pow(pow(abs(a-x),2)+pow(abs(b-y),2),0.5);
  r=r*2;
 
    cout <<ceil((d/r));
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