#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    int n;
    cin >>n;
    string s;
    s=to_string(n);
    int k=s.length();
    if(n<=10){
        cout <<n<<'
';
    }
    else{
cout <<(int)((int)n/(pow(10,k-1))+(k-1)*9)<<'
';}
 
 
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