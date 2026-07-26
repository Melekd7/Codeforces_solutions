#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int d,n;
    cin >>n>>d;
    int m;
    cin >>m;
    vector <int>x(m);
    vector <int>y(m);
    for (int i=0;i<m;i++){
        cin>>x[i]>>y[i];
    }
    for (int i=0;i<m;i++){
     if(x[i]<=n  && y[i]<=n && abs(x[i]-y[i])<=d && d<=x[i]+y[i]&&x[i]+y[i]<=2*n-d){
     cout <<"YES"<<endl;
    }
    else{
        cout << "NO"<<endl;
    }
    }
    return 0;
}