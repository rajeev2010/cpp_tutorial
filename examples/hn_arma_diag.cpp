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
mat    X = randu<mat>(5,5);
cout << "X:" << endl << X << endl;

vec a = X.diag();
vec b = X.diag(1);
vec c = X.diag(-2);
cout << "a:" << endl << a << endl;
cout << "b:" << endl << b << endl;
cout << "c:" << endl << c << endl;

X.diag()  = randu<vec>(5);
cout << "X:" << endl << X << endl;

X.diag() += 6;
cout << "X:" << endl << X << endl;

return 0;
}
