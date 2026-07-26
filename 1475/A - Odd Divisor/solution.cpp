#include <iostream>
using namespace std;
 
int main()
{
    long long n; 
    int t, j;
    
    cin >> t;
    for(j = 0; j < t; j++){
        cin >> n;
        
        if (n % 2 == 1){
            cout << "YES" << endl;
        }
        else {
            
            while (n % 2 == 0){
                n = n / 2;
            }
            
           
            if (n > 1){
                cout << "YES" << endl;
            }
            else {
                cout << "NO" << endl;
            }
        }
    }
 
    return 0;
}