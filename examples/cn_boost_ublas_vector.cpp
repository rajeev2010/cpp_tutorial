/* program to illustrate the use of boost::ublas
 *
 * example taken from boost document
 *
 * Rajeev Singh
 * 2013-04-12
 *
 */

#include <boost/numeric/ublas/vector.hpp>
#include <boost/numeric/ublas/io.hpp>

int main () {
    using namespace boost::numeric::ublas;
    vector<double> v (3);
    for (unsigned i = 0; i < v.size (); ++ i)
        v (i) = i;
    std::cout << v << std::endl;
}

