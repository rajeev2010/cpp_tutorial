/* program to illustrate the use of boost::numeric::ublas
 *
 * example taken from boost document
 *
 * Rajeev Singh
 * 2013-04-14
 *
 */

#include <boost/numeric/ublas/symmetric.hpp>
#include <boost/numeric/ublas/io.hpp>

int main () {
    using namespace boost::numeric::ublas;
    symmetric_matrix<double, lower> ml (3, 3);
    for (unsigned i = 0; i < ml.size1 (); ++ i)
        for (unsigned j = 0; j <= i; ++ j)
            ml (i, j) = 3 * i + j;
    std::cout << ml << std::endl;
    symmetric_matrix<double, upper> mu (3, 3);
    for (unsigned i = 0; i < mu.size1 (); ++ i)
        for (unsigned j = i; j < mu.size2 (); ++ j)
            mu (i, j) = 3 * i + j;
    std::cout << mu << std::endl;
}
