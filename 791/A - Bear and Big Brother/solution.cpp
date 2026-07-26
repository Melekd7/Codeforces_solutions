#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b,c;
    cin >>a>>b;
    c=1;
    if (a<b){
    while(3*a<=2*b){
        a=3*a;
        b=2*b;
        c++;
    }
    cout <<c <<endl;}
    else{
        cout << 1<<endl;
    }
return 0;
 
}