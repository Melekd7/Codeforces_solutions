#include <bits/stdc++.h>
using namespace std;
void solve(){
string s;
cin >>s;int j=1;
while(j<s.length() && (char)toupper(s[j])==s[j]){
    j++;
}
if(j==s.length()){
    if(s[0]==(char)toupper(s[0])){
cout <<(char)tolower(s[0]);
    }
    else{
        cout <<(char)toupper(s[0]);
    }
 
for(int i=1;i<s.length();i++){
    cout <<(char)tolower(s[i]);
}
 
}
else {
    cout <<s;
}
}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    t=1;
 // cin>>t;
    while(t--) {
        solve();
        }
    return 0;
}