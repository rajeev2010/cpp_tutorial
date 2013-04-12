/* program to illustrate the use of boost::multiprecision
 *
 * example taken from boost document
 *
 * compile command:
 *   g++ -I /home/rajeev/software/general/boost_1_53_0/
 *   ck_boost_mulitprecision_gmp.cpp -lgmp
 *
 * Rajeev Singh
 * 2013-04-12
 *
 */

#include <boost/multiprecision/gmp.hpp>

using namespace boost::multiprecision;

int main () {
    mpz_int v = 1;

    // Do some arithmetic:
    for(unsigned i = 1; i <= 1000; ++i)
       v *= i;

    std::cout << v << std::endl; // prints 1000!

    // Access the underlying representation:
    mpz_t z;
    mpz_init(z);
    mpz_set(z, v.backend().data());

    return 0;
}
