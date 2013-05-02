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
mat A = randu<mat>(2, 3);
A.print("\n\nA:");

mat B = repmat(A, 4, 5);
B.print("\n\nB:");

return 0;
}
