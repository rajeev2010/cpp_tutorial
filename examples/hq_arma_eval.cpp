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

cx_mat A( randu<mat>(4,4), randu<mat>(4,4) );

real(A).eval().save("A_real.dat", raw_ascii);
imag(A).eval().save("A_imag.dat", raw_ascii);

return 0;
}
