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
mat A = randu<mat>(5,8);
A.print("\nA:");

A.shed_row(2);
A.print("\nA:");
A.shed_cols(2,4);
A.print("\nA:");

return 0;
}
