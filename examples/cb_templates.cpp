/* program to illustrate generic programming using templates
 * safely
 *
 * Rajeev Singh
 * 2013-04-08
 *
 */

#include <iostream>
using namespace std;

template <typename T>
T square(const T f) {
    return f*f;
}

int main() {
    double x = square( 2.1 );
    int    m = square( 2 );

    cout << "x = : " << x << endl;
    cout << "m = : " << m << endl;

    return 0;
}
