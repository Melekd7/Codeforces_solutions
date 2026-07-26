#include <bits/stdc++.h>
 
using namespace std;
int main(){
long long n;
string s;
cin >>n;
 
long long i=0;
while(n--){
        cin>>s;
if (s.substr(0,2)=="++"){
        i++;
 
 
}
else if (s.substr(0,2)=="--"){
    i--;
 
}
else if(s.substr(s.length()-2,s.length())=="--"){
    i--;
}
else if (s.substr(s.length()-2,s.length())=="++"){
    i++;
}}
cout <<i<<endl;
    return 0;
}