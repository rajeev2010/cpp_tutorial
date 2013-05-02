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
running_stat<double> stats;

for(uword i=0; i<10000; ++i)
  {
  double sample = double(rand())/RAND_MAX;
  stats(sample);
  }

cout << "mean = " << stats.mean() << endl;
cout << "var  = " << stats.var()  << endl;
cout << "min  = " << stats.min()  << endl;
cout << "max  = " << stats.max()  << endl;

return 0;
}
