#include <bits/stdc++.h>
using namespace std;
 
int main(){
    long long n,s=0,h;
    cin >>n>>h;
    vector <long long >a(n);
    int i;
    for(i=0;i<n;i++){
        cin >>a[i];
        if (a[i]<=h){
            s++;
        }
        else{s+=2;
    }
}
cout <<s<<endl;
return 0;}