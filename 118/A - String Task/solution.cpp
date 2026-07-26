#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
     ios_base::sync_with_stdio(0);
    cin.tie(0);
    string s,f;
    cin >>s;
    for(int i=0;i<s.length();i++){
        if(!(toupper(s[i])=='A' ||toupper(s[i])=='O' ||toupper(s[i])=='U' || toupper(s[i])=='I'|| toupper(s[i])=='E'||toupper(s[i])=='Y')){
            f=f+'.';
            char c=tolower(s[i]);
            f=f+c;
        }}
    cout <<f<<endl;
    return 0;}