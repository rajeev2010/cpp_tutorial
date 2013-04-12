/* program to illustrate the use of boost::random
 *
 * Rajeev Singh
 * 2013-04-12
 *
 */

#include <iostream>
#include <boost/random/mersenne_twister.hpp>
#include <boost/random/uniform_real.hpp>

using namespace std;

int main (void) {
    boost::random::mt19937 generator;
    boost::uniform_real<> uni_dist(0,1);

    int i, j;

    for (i = 0; i < 100; i++)
        cout << uni_dist(generator) << endl;

    return 0;
}

