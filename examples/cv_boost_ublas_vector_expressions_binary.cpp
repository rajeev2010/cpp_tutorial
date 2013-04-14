/* program to illustrate the use of boost::numeric::ublas
 *
 * example taken from boost document
 *
 * Rajeev Singh
 * 2013-04-14
 *
 */

#include <boost/numeric/ublas/vector.hpp>
#include <boost/numeric/ublas/io.hpp>

int main () {
    using namespace boost::numeric::ublas;
    vector<double> v1 (3), v2 (3);
    for (unsigned i = 0; i < std::min (v1.size (), v2.size ()); ++ i)
        v1 (i) = v2 (i) = i;

    std::cout << v1 + v2 << std::endl;
    std::cout << v1 - v2 << std::endl;
}
