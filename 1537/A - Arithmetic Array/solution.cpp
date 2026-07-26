#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    int n;
    cin >>n;
    vector <int>a(n);
    int s=0;
    for(int i=0;i<n;i++){
        cin >>a[i];
        s+=a[i];
    }
    if(s==n){
        cout <<0<<'
';
    }
    else if(s<n){
        cout <<1<<'
';
    }
    else{
        cout <<s-n<<'
';
    }
    
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