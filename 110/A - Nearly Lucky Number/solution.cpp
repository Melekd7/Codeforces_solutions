#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    string s;
int x,y;
    cin >>s;
   int i=0;
   while(i<s.length() ){
 
            if (s[i]=='4'){
                x+=1;
            }
            if (s[i]=='7'){
                y+=1;
            }i++;
         }
 
        if (x+y==7 || x+y==4 ){
            cout <<"YES"<<endl;
        }
        else{
            cout << "NO"<<endl;
        }
 
 
    return 0;}
 