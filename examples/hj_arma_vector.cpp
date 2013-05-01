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
vec x(10);
cout << "x:" << endl << x << endl;

vec y = zeros<vec>(10,1);
cout << "y:" << endl << y << endl;

mat A = randu<mat>(10,10);
vec z = A.col(5); // extract a column vector
cout << "z:" << endl << z << endl;
}

{
vec a(5);  a = 123.0;
cout << "a:" << endl << a << endl;
}

{
vec a(5);  a.fill(123.0);
cout << "a:" << endl << a << endl;
}

return 0;
}
