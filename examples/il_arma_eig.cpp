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
mat A = randu<mat>(50,50);
mat B = A.t()*A;  // generate a symmetric matrix

vec eigval;
mat eigvec;

eig_sym(eigval, eigvec, B);        // use standard algorithm by default
eigval.print("\n\neigval:");

eig_sym(eigval, eigvec, B, "dc");  // use "divide & conquer" algorithm
eigval.print("\n\neigval:");

{
mat A = randu<mat>(10,10);

cx_vec eigval;
cx_mat eigvec;

eig_gen(eigval, eigvec, A);
eigval.print("\n\neigval:");
}

return 0;
}
