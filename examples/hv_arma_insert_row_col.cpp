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
mat A = randu<mat>(5,6);
mat B = ones<mat>(5,2);
cout << "A:" << endl << A << endl << endl;
cout << "B:" << endl << B << endl << endl;

// at column 2, insert a copy of B;
// A will now have 12 columns
A.insert_cols(2, B);
cout << "A:" << endl << A << endl << endl;

// at column 1, insert 5 zeroed columns;
// B will now have 7 columns
B.insert_cols(1, 5);
cout << "B:" << endl << B << endl << endl;

return 0;
}
