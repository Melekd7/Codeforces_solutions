#include <bits/stdc++.h>
using namespace std;
 
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    long long n;
    cin >> n;
    long long a,b,c;
 
    for (int i=0;i<n;i++) {
        cin >>a>>b>>c;
        if (a-1<llabs(c-b)+c-1){
            cout <<1<<endl;
        
 
    }
else if (a-1>llabs(c-b)+c-1){
    cout <<2<<endl;
 
}
else{
    cout <<3<<endl;
}}
    
    return 0;
}