#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t,n;
    cin >> n>>t;
    string s,f="";
    vector <char>a(n);
    cin >>s;
    for(int i=0;i<n;i++){
            a[i]=s[i];}
    while(t--){
    for(int i=0;i<n-1;i++){
        if (s[i]=='B'){
                if (s[i+1]=='G'){
                        a[i]='G';
    a[i+1]='B';
 
                }
        }}for(int i=0;i<n;i++){
            s[i]=a[i];}}
 
    
    for (int i=0;i<n;i++){
            f+=s[i];
 
    }
    cout <<f<<endl;
    return 0;
}