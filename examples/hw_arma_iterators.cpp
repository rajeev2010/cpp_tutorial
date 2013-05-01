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
mat X = randu<mat>(5,5);
cout << "X:" << endl << X << endl << endl;

mat::iterator a = X.begin();
mat::iterator b = X.end();

for(mat::iterator i=a; i!=b; ++i)
  {
  cout << *i << endl;
  }

cout << endl << endl;

mat::col_iterator c = X.begin_col(1);  // start of column 1
mat::col_iterator d = X.end_col(3);    // end of column 3

for(mat::col_iterator i=c; i!=d; ++i)
  {
  cout << *i << endl;
  (*i) = 123.0;
  }

cout << "X:" << endl << X << endl;
return 0;
}
