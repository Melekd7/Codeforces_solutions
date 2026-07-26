#include <bits/stdc++.h>
using namespace std;
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    long long n;
    cin >> n;
    long long a,b,c;
 
    for (int i=0;i<n;i++) {
        cin >>a>>b>>c;
        if (a>b){
            cout <<"First"<<endl;
        }
        else if(a<b){
            cout <<"Second"<<endl;
        }
        else{
            if(c%2==1){
                cout <<"First"<<endl;
            }
            else{
                cout <<"Second"<<endl;
            }
        }
 
    }
    
    return 0;
}