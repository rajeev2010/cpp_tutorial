/* program to illustrate function pointers
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

int main() {
    double a = 2.5;
    double (* pf) (const double x);
    pf = square;

    cout << "a         = " << a << endl;
    cout << "square(a) = " << square(a) << endl;
    cout << "pf(a)     = " << pf(a) << endl;

    return 0;
}
