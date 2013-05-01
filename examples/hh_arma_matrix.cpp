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

mat A = randu<mat>(5,5);
cout << "A:" << endl << A << endl;

double x = A(1,2);
cout << "x = " << x << endl;

mat B = A + A;
mat C = A * B;
mat D = A % B;

cout << "B:" << endl << B << endl;
cout << "C:" << endl << C << endl;
cout << "D:" << endl << D << endl;


cx_mat X(A,B);
cout << "X:" << endl << X << endl;

B.zeros();
cout << "B:" << endl << B << endl;
B.set_size(10,10);
cout << "B:" << endl << B << endl;
B.zeros(5,6);
cout << "B:" << endl << B << endl;

//
// fixed size matrices:

mat::fixed<5,6> F;
F.ones();
cout << "F:" << endl << F << endl;

mat44 G;
G.randn();
cout << "G:" << endl << G << endl;

cout << mat22().randu() << endl;

//
// constructing matrices from
// auxiliary (external) memory:

double aux_mem[24];
mat H(aux_mem, 4, 6, false);
cout << "H:" << endl << H << endl;

return 0;
}
