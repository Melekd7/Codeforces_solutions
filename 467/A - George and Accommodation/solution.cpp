#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >>n;
    int p,q;
    int s=0;
    for (int i=0;i<n;i++){
        cin >>p>>q;
        if(p<q-1){
            s++;
        }
    }
    cout <<s<<endl;
    return 0;
}