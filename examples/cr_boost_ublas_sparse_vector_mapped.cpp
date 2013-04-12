/* program to illustrate the use of boost::numeric::ublas
 *
 * example taken from boost document
 *
 * Rajeev Singh
 * 2013-04-12
 *
 */

#include <boost/numeric/ublas/vector_sparse.hpp>
#include <boost/numeric/ublas/io.hpp>

int main () {
    using namespace boost::numeric::ublas;
    mapped_vector<double> v (6, 3);
    for (unsigned i = 0; i < v.size ()/2; ++ i)
        v (2*i) = i+10;
    std::cout << v << std::endl;
}

