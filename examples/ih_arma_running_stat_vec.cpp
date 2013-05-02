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
running_stat_vec<rowvec::elem_type> stats;

rowvec sample;

for(uword i=0; i<10000; ++i)
  {
  sample = randu<rowvec>(5);
  stats(sample);
  }

cout << "mean = " << stats.mean() << endl;
cout << "var  = " << stats.var()  << endl;
cout << "min  = " << stats.min()  << endl;
cout << "max  = " << stats.max()  << endl;

//
//

running_stat_vec<rowvec::elem_type> more_stats(true);

for(uword i=0; i<20; ++i)
  {
  sample = randu<rowvec>(3);
  
  sample(1) -= sample(0);
  sample(2) += sample(1);
  
  more_stats(sample);
  }

cout << "covariance matrix = " << endl;
cout << more_stats.cov() << endl;

rowvec sd = more_stats.stddev();

cout << "correlations = " << endl;
cout << more_stats.cov() / (sd.t() * sd);

return 0;
}
