#include <iostream>
#include <iomanip>
using namespace std;
 
int main() {
    int h1, m1, h2, m2;
    char ch;
 
    cin >> h1 >> ch >> m1;
    cin >> h2 >> ch >> m2;
 
    int start = h1 * 60 + m1;
    int end = h2 * 60 + m2;
 
    int duration = end - start;
    int mid = start + duration / 2;
 
    int h = mid / 60;
    int m = mid % 60;
 
    cout << setw(2) << setfill('0') << h << ":"
         << setw(2) << setfill('0') << m;
 
    return 0;
}