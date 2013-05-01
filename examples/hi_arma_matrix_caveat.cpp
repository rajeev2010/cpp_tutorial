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
  
  {
  mat A(5,5);  A = 123.0;
  cout << "A:" << endl << A << endl;
  }

  {
  mat A(5,5);  A.fill(123.0);
  cout << "A:" << endl << A << endl;
  }
   return 0;
  }
