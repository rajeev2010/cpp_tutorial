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

wall_clock timer;

mat A = randu<mat>(4,4);
mat B = randu<mat>(4,4);
mat C;

timer.tic();
for(uword i=0; i<100000; ++i)
  C = A + B + A + B;

double n_secs = timer.toc();
cout << "took " << n_secs << " seconds" << endl;

return 0;
}
