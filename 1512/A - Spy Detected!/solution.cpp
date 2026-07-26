#include <bits/stdc++.h>
using namespace std;
 
void solve(){
    int n;
    cin >>n;
    vector <int>a(n);
    for(int i=0 ;i<n;i++){
        cin >>a[i];
    }
    int i=1;
    while(i<n && a[i]==a[0]){
        i++;
    }
    if(i<2 && a[2]==a[0]){
        cout <<2<<'
';
    }
    else if(i<2 && a[2]==a[1]){ cout <<1<<'
';}
    else{
        cout <<i+1<<'
';
    }
 
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--){
        solve();
    }
}