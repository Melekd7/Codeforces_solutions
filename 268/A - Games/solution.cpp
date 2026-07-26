#include <bits/stdc++.h>
using namespace std;
int main(){
    
    int i,j,c=0;
    int n;
    cin>>n;
    vector<int> a(n,0);
    vector<int> b(n,0);
    for (i=0;i<n;i++){
        cin >>a[i]>>b[i];
    }
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if (a[i]==b[j]){
                c++;
            }
        }
    }
    cout <<c<<endl;
    return 0;
}