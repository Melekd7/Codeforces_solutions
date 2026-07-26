#include <bits/stdc++.h>
using namespace std;
int main(){
    long long n;
    cin >> n;
    vector <long long>a(n);
    int i=0;
    cin >>a[0];
    while(i<n && a[i]!=1){
        i++;
        if(i<n){
        cin >>a[i];}
        
    }
    if(i==n){
        cout<<"EASY"<<endl;
    }
    else{
        cout << "HARD"<<endl;
    }
    return 0;
}