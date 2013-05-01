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
mat A = zeros<mat>(5,8);
A.print("\nA:");

A.submat(0,1,2,3) = randu<mat>(3,3);
A.print("\nA:");

// the following three statements
// access the same part of A
mat B = A.submat(0,1,2,3);
mat C = A.submat( span(0,2), span(1,3) );
mat D = A( span(0,2), span(1,3) );
B.print("\nB:");
C.print("\nC:");
D.print("\nD:");

// the following two statements
// access the same part of A
A.col(1)        = randu<mat>(5,1);
A.print("\nA:");

A(span::all, 1) = randu<mat>(5,1);
A.print("\nA:");

mat X = randu<mat>(5,5);
X.print("\nX:");

// get all elements of X that are greater than 0.5
vec q = X.elem( find(X > 0.5) );
q.print("\nq:");

// set four specific elements of X to 1
uvec indices;
indices << 2 << 3 << 6;

X.elem(indices) = ones<vec>(3);
X.print("\nX:");


return 0;
}
