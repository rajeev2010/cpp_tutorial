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
mat A = randu<mat>(4,5);

cout << A.in_range(0,0) << endl;  // true
cout << A.in_range(3,4) << endl;  // true
cout << A.in_range(4,5) << endl;  // false

return 0;
}
