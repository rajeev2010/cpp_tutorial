/* program to illustrate the use of the armadillo library
 *
 * example taken from armadillo document
 *
 * Rajeev Singh
 * 2013-05-01
 *
 */

#include <iostream>
#include <armadillo>

using namespace std;
using namespace arma;

int main(int argc, char** argv)
{
cube x(1,2,3);
cout << "x:" << endl << x << endl;

cube y = randu<cube>(4,5,6);
cout << "y:" << endl << y << endl;

mat A = y.slice(1);  // extract a slice from the cube
                     // (each slice is a matrix)
cout << "A:" << endl << A << endl;

mat B = randu<mat>(4,5);
cout << "B:" << endl << B << endl;

y.slice(2) = B;     // set a slice in the cube
cout << "y:" << endl << y << endl;

cube q = y + y;     // cube addition
cube r = y % y;     // element-wise cube multiplication
cout << "q:" << endl << q << endl;
cout << "r:" << endl << r << endl;


cube::fixed<4,5,6> f;
f.ones();
cout << "f:" << endl << f << endl;

cube c(5,6,7);
//c.slice(0) = randu<mat>(10,20); // wrong size
cout << "c:" << endl << c << endl;

{
cube c(5,6,7);  c = 123.0;
cout << "c:" << endl << c << endl;
}

{
cube c(5,6,7);  c.fill(123.0);
cout << "c:" << endl << c << endl;
}

return 0;
}
