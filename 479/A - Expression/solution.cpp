#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
   int a,b,c;
   cin >>a;
   cin >>b;
   cin >>c;
   int s=0;
 
 
   if (a==1 && b==1 &&c==1){
    cout <<3<<endl;
   }
   else if(b==1 && c==1){
    cout <<2*a<<endl;
   }else if(a==1 && b==1){
    cout <<2*c<<endl;}
    else if(a==1 && c==1){
    cout <<a+b+c<<endl;}
    else if(a==1){
    cout <<(a+b)*c<<endl;}
    else if(c==1){
    cout <<a*(b+c)<<endl;}
        else if(b==1){
    cout <<max(a,c)*(b+min(a,c))<<endl;}
    else{
        cout<<a*b*c<<endl;
    }
 
 
 
 
    return 0;}
 