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
mat A;

A << 1 << 2 << 3 << endr
  << 4 << 5 << 6 << endr;
cout << "A:" << endl << A << endl << endl;

//mat B = { 1, 2, 3, 4, 5, 6 };  // C++11 only
//B.reshape(2,3);
//cout << "B:" << endl << B << endl << endl;

return 0;
}
