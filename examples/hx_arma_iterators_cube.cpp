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
cube X = randu<cube>(2,3,4);
cout << "X:" << endl << X << endl << endl;


cube::iterator a = X.begin();
cube::iterator b = X.end();

for(cube::iterator i=a; i!=b; ++i)
  {
  cout << *i << endl;
  }

cout << endl << endl;

cube::slice_iterator c = X.begin_slice(1);  // start of slice 1
cube::slice_iterator d = X.end_slice(2);    // end of slice 2

for(cube::slice_iterator i=c; i!=d; ++i)
  {
  cout << *i << endl;
  (*i) = 123.0;
  }

cout << "X:" << endl << X << endl << endl;

return 0;
}
