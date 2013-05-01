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
mat A = randu<mat>(4,4);
cout << "A:" << endl << A << endl << endl;

mat X = A.i();
cout << "X:" << endl << X << endl << endl;

mat Y = (A+A).i();
cout << "Y:" << endl << Y << endl << endl;

mat B = randu<mat>(4,1);
cout << "B:" << endl << B << endl << endl;

mat Z = A.i() * B; // automatically converted to Z=solve(A,B)
cout << "Z:" << endl << Z << endl << endl;

return 0;
}
