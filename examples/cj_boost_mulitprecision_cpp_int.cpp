/* program to illustrate the use of boost::multiprecision
 *
 * example taken from boost document
 *
 * Rajeev Singh
 * 2013-04-12
 *
 */

#include <boost/multiprecision/cpp_int.hpp>

using namespace boost::multiprecision;

int main () {
    int128_t v = 1;

    // Do some fixed precision arithmetic:
    for(unsigned i = 1; i <= 20; ++i)
       v *= i;

    std::cout << v << std::endl; // prints 20!

    // Repeat at arbitrary precision:
    cpp_int u = 1;
    for(unsigned i = 1; i <= 100; ++i)
       u *= i;

    std::cout << u << std::endl; // prints 100!
    
    return 0;
}
