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
mat A = randu<mat>(5,5);
cout << "A:" << endl << A << endl << endl;
cout << "A.is_empty() = " << A.is_empty() << endl;

A.reset();
cout << "A:" << endl << A << endl << endl;
cout << "A.is_empty() = " << A.is_empty() << endl;
}

{
mat A = randu<mat>(5,5);
mat B = randu<mat>(5,5);

B(1,1) = datum::nan;

cout << "A:" << endl << A << endl << endl;
cout << "B:" << endl << B << endl << endl;

cout << "A.is_finite() = " << A.is_finite() << endl;
cout << "B.is_finite() = " << B.is_finite() << endl;
}

{
mat A = randu<mat>(5,5);
mat B = randu<mat>(6,7);

cout << "A:" << endl << A << endl << endl;
cout << "B:" << endl << B << endl << endl;

cout << "A.is_square() = " << A.is_square() << endl;
cout << "B.is_square() = " << B.is_square() << endl;
}

{
mat A = randu<mat>(1,5);
mat B = randu<mat>(5,1);
mat C = randu<mat>(5,5);

cout << "A:" << endl << A << endl << endl;
cout << "B:" << endl << B << endl << endl;
cout << "C:" << endl << C << endl << endl;

cout << "A.is_vec() = " << A.is_vec() << endl;
cout << "B.is_vec() = " << B.is_vec() << endl;
cout << "C.is_vec() = " << C.is_vec() << endl;
}

return 0;
}
