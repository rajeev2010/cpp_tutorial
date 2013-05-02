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
  
{
rowvec x(10);
cout << "x:" << endl << x << endl;

//rowvec y = zeros<mat>(1,10);
rowvec y = zeros<rowvec>(10);
cout << "y:" << endl << y << endl;

mat A = randu<mat>(10,10);
rowvec z = A.row(5); // extract a row vector
cout << "z:" << endl << z << endl;
}

{
rowvec a(5);  a = 123.0;
cout << "a:" << endl << a << endl;
}

{
rowvec a(5);  a.fill(123.0);
cout << "a:" << endl << a << endl;
}

return 0;
}
