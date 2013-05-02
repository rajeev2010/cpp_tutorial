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
cube A = randu<cube>(2,3,4);
A.print("\n\nA:");

mat B = A.slice(1);
B.print("\n\nB:");

A.slice(0) = randu<mat>(2,3);
A.print("\n\nA:");

A.slice(0)(1,2) = 99.0;
A.print("\n\nA:");

A.subcube(0,0,1,  1,1,2) = randu<cube>(2,2,2);
A.print("\n\nA:");

A( span(0,1), span(0,1), span(1,2) ) = randu<cube>(2,2,2);
A.print("\n\nA:");

return 0;
}
