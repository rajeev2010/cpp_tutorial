/* program to illustrate the use of boost::numeric::ublas
 *
 * example taken from boost document
 *
 * Rajeev Singh
 * 2013-04-14
 *
 */

#include <boost/numeric/ublas/matrix.hpp>
#include <boost/numeric/ublas/io.hpp>

int main () {
    using namespace boost::numeric::ublas;
    {
    identity_matrix<double> m (3);
    std::cout << "Identity:" << std::endl;
    std::cout << m << std::endl;
    }
    
    {
    zero_matrix<double> m (3, 3);
    std::cout << "Zero:" << std::endl;
    std::cout << m << std::endl;
    }
    
    {
    scalar_matrix<double> m (3, 3);
    std::cout << "Scalar:" << std::endl;
    std::cout << m << std::endl;
    }
}
