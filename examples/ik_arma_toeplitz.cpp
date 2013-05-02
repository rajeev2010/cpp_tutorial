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
vec A = randu<vec>(5);
A.print("\n\nA:");

mat X = toeplitz(A);
X.print("\n\nX:");

mat Y = circ_toeplitz(A);
Y.print("\n\nY:");

return 0;
}
