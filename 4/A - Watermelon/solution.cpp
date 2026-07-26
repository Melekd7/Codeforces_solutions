#include <bits/stdc++.h>
using namespace std;
 
int main() {
/*float f;
    int i,t,x,y;
    cin >> t;
    for(i=0;i<t;i++){
        cin >> x>>y;
        if((x+y)%3==0 && x>abs(y)){
                f=(float)abs(y)/x;
                if (y<0 && f<0.25){
                    cout << "NO"<<endl;
                }
                else{
 
            cout << "YES" << endl;}
        }
        else{
            cout << "NO" << endl;
        }
    }
 
    */
    int n;
    cin >> n;
    if (n%2==0 && n>2){
        cout << "YES"<< endl;
 
    }
    else{
        cout << "NO" << endl;
    }
    return 0;
}