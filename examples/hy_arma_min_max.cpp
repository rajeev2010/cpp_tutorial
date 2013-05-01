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
vec v = randu<vec>(10);
cout << "v:" << endl << v << endl << endl;

cout << "min value is " << v.min() << endl;


uword  index;
double min_val = v.min(index);

cout << "index of min value is " << index << endl;


mat A = randu<mat>(5,5);
cout << "A:" << endl << A << endl << endl;

uword  row;
uword  col;
double min_val2 = A.max(row,col);

cout << "max value is at " << row << ',' << col << endl;

return 0;
}
