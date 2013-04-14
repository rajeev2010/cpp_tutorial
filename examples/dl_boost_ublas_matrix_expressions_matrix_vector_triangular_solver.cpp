/* program to illustrate the use of boost::numeric::ublas
 *
 * example taken from boost document
 *
 * Rajeev Singh
 * 2013-04-14
 *
 */

#include <boost/numeric/ublas/triangular.hpp>
#include <boost/numeric/ublas/io.hpp>

int main () {
    using namespace boost::numeric::ublas;
    matrix<double> m (3, 3);
    vector<double> v (3);
    for (unsigned i = 0; i < std::min (m.size1 (), v.size ()); ++ i) {
        for (unsigned j = 0; j <= i; ++ j)
            m (i, j) = 3 * i + j + 1;
        v (i) = i;
    }

    std::cout << solve (m, v, lower_tag ()) << std::endl;
    std::cout << solve (v, m, lower_tag ()) << std::endl;
}
