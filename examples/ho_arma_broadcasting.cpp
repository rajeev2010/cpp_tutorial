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
mat X = ones<mat>(6,5);
cout << "X:" << endl << X << endl << endl;

vec v = linspace<vec>(10,15,6);
cout << "v:" << endl << v << endl << endl;

// add v to each column in X
X.each_col() += v;
cout << "X:" << endl << X << endl << endl;

// subtract v from columns 0 through to 3 in X
X.cols(0,3).each_col() -= v;
cout << "X:" << endl << X << endl << endl;

uvec indices(2);
indices(0) = 2;
indices(1) = 4;

// copy v to columns 2 and 4 in X
X.each_col(indices) = v;
cout << "X:" << endl << X << endl << endl;

return 0;
}
