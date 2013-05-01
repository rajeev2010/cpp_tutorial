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
sp_mat A(5,6);
sp_mat B(6,5);
cout << "A:" << endl << A << endl;

A(0,0) = 1;
A(1,0) = 2;
cout << "A:" << endl << A << endl;

B(0,0) = 3;
B(0,1) = 4;
cout << "B:" << endl << B << endl;

sp_mat C = 2*B;
cout << "C:" << endl << C << endl;

sp_mat D = A*C;
cout << "D:" << endl << D << endl;


// batch insertion of two values at (5, 6) and (9, 9)
umat locations;
locations << 5 << 9 << endr
          << 6 << 9 << endr;

vec values;
values << 1.5 << 3.2 << endr;

sp_mat X(locations, values);
cout << "X:" << endl << X << endl;


return 0;
}
