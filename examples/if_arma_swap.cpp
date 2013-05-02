/* program to illustrate the use of the armadillo library
 *
 * example taken from armadillo document
 *
 * Rajeev Singh
 * 2013-05-02
 *
 */

#include <iostream>
#include <armadillo>

using namespace std;
using namespace arma;

int main(int argc, char** argv)
{
mat A = zeros<mat>(4,5);
mat B =  ones<mat>(6,7);

A.swap(B);
A.print("\n\nA:");
B.print("\n\nB:");

mat X = randu<mat>(5,5);
X.print("\n\nX:");

X.swap_rows(0,4);
X.print("\n\nX:");

return 0;
}
