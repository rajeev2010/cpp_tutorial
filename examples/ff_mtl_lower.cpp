/* program to illustrate the use of mtl
 *
 * example taken from mtl document
 *
 * Rajeev Singh
 * 2013-04-17
 *
 */

#include <iostream>
#include <boost/numeric/mtl/mtl.hpp>

int main(int, char**)
{
    using namespace mtl;

    double           array[][3]= {{1., 2., 3.}, {4., 5., 6.}, {7., 8., 9.}};
    dense2D<double>  A(array), L, SL;

    L= lower(A);
    std::cout << "\nlower(A) = \n" << L;

    SL= strict_lower(A);
    std::cout << "\nstrict_lower(A) = \n" << SL;
        
    return 0;
}
