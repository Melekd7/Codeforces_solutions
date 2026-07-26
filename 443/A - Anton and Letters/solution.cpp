#include <iostream>
#include <string>
#include <set>
 
using namespace std;
 
int main() {
    string s;
    getline(cin,s);
    
    set<char> distinct_letters;
    for (char c:s) {
        if (isalpha(c)) {
            distinct_letters.insert(c);
        }
    }
    cout << distinct_letters.size() << endl;
    
    return 0;
}