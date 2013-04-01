/* program to illustrate arrays as function arguments
 *
 * Rajeev Singh
 * 2013-04-01
 *
 */

#include <iostream>
using namespace std;

void
copy ( const double x[3], double y[3] ) {
    for ( int i = 0; i < 3; i++ )
        y[i] = x[i];
}

void
add ( const double x[3], double y[3] ) {
    for ( int i = 0; i < 3; i++ )
        y[i] += x[i];
}


int main() {
    double a[3],
           b[] = {0, 0, 0}; // b is automaticall of size 3

    for ( int i = 0; i < 3; i++ ) 
        a[i] = 2*i; 

    cout << "Intial a and b:" << endl;
    for ( int i = 0; i < 3; i++ ) 
        cout <<   "a[" << i << "] = " << a[i]
             << "  b[" << i << "] = " << b[i]<< endl;

    copy( a, b );
    cout << endl << "After calling copy funtion:" << endl;
    for ( int i = 0; i < 3; i++ ) 
        cout <<   "a[" << i << "] = " << a[i]
             << "  b[" << i << "] = " << b[i]<< endl;

    add( a, b );
    cout << endl << "After calling sum funtion:" << endl;
    for ( int i = 0; i < 3; i++ ) 
        cout <<   "a[" << i << "] = " << a[i]
             << "  b[" << i << "] = " << b[i]<< endl;

    return 0;
}
