#include <bits/stdc++.h>
using namespace std;
 
int main(){
    long long n,m;
    cin>>n>>m;
    for(int i=0;i<n;i++){
    
    
        if(i%2==0){
            for(int k=0;k<m;k++){
            cout<<'#';}}
        else if(i%4==1){
            for(int k=0;k<m-1;k++){
                cout<<'.';
            }
            cout<<'#';
            
        }
        else{cout<<'#';
            for(int k=0;k<m-1;k++){cout<<'.';}
        }
    cout<<'
';}
    
    return 0;
}