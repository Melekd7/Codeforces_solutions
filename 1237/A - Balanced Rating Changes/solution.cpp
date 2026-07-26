#include <bits/stdc++.h>
using namespace std;
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    long long n;
    cin >> n;
    long long a,b,c;
    b=0;
    c=0;
 
    for (int i=0;i<n;i++) {
        cin >>a;
        if (a%2==0){
            cout <<a/2<<endl;
        
 
    }
 
else{
    if (a>0){
 
    cout <<(a/2)+b<<endl;
b=1-b;}
else{cout <<(a/2)-c<<endl;
c=1-c;
 
}}
}
    return 0;
}