/* program to illustrate funtion pointers as arguments
 *
 * Rajeev Singh
 * 2013-04-01
 *
 */

#include <iostream>
using namespace std;

double
square (const double x) {
    return x*x;
}

double
cube (const double x) {
    return x*x*x;
}

double
f ( double ( * func ) ( const double x ),
  const double x ) {
    return func( x );
}


int main() {
    double a = 2.5;

    cout << "a            = " << a << endl;
    cout << "f(square, a) = " << f(square, a) << endl;
    cout << "f(cube,   a) = " << f(cube,   a) << endl;

    return 0;
}
