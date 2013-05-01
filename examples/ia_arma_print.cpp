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
mat B = randu<mat>(6,6);

A.print();

// print a transposed version of A
cout << endl;
A.t().print();

// "B:" is the optional header line
B.print("B:");

cout << endl << A << endl;
cout << "B:" << endl << B << endl;
return 0;
}
