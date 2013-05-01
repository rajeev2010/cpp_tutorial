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
mat A = randu<mat>(5,10);
mat B = randu<mat>(5,10);
mat C = randu<mat>(10,5);
cout << "A:" << endl << A << endl << endl;
cout << "B:" << endl << B << endl << endl;
cout << "C:" << endl << C << endl << endl;

mat P = A + B;
mat Q = A - B;
mat R = -B;
mat S = A / 123.0;
mat T = A % B;
mat U = A * C;
cout << "P:" << endl << P << endl << endl;
cout << "Q:" << endl << Q << endl << endl;
cout << "R:" << endl << R << endl << endl;
cout << "S:" << endl << S << endl << endl;
cout << "T:" << endl << T << endl << endl;
cout << "U:" << endl << U << endl << endl;

// V is constructed without temporaries
mat V = A + B + A + B;
cout << "V:" << endl << V << endl << endl;

imat AA = "1 2 3; 4 5 6; 7 8 9;";
imat BB = "3 2 1; 6 5 4; 9 8 7;";
cout << "AA:" << endl << AA << endl << endl;
cout << "BB:" << endl << BB << endl << endl;

// compare elements
umat ZZ = (AA >= BB);
cout << "ZZ:" << endl << ZZ << endl << endl;

return 0;
}
