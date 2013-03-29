// program to illustrate conditional structure
//
// Rajeev Singh
// 2013-03-29

#include <iostream>
using namespace std;

int main() {
    int n = 1;

    if ( n > 0 )
    {
        n = n / n;
    }

    if ( n < 0 ) n += 5; // NOTE: trivial block!
    else         n -= 6;
   
    cout << "n = " << n << endl;

    return 0;
}
