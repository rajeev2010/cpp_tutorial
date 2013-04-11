/* program to illustrate complex numbers from STL
 *
 * Rajeev Singh
 * 2013-04-11
 *
 */

#include <iostream>
#include <complex>
using namespace std;

int main () {
    complex< float > c1;
    c1.real() = 1.0;
    c1.imag() = -2.0;
    cout << "c1 = " << c1 << endl << endl;

    complex< double > I ( 0.0, 1.0 );
    complex< double > r ( 5.0 );
    complex< double > z;
    complex< double > i = I;

    cout << "I = " << I << endl;
    cout << "r = " << r << endl;
    cout << "z = " << z << endl;
    cout << "i = " << i << endl;
    cout << endl;
    cout << " sqrt( r + i ) = " << sqrt( r + i ) << endl;
    cout << "  sin( r + i ) = " <<  sin( r + i ) << endl;

  return 0;
}

