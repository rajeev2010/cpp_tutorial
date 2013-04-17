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

    double                array[][5]= {{1., 2., 3., 4., 5.}, {4., 5., 6., 7., 8.}, 
                                       {7., 8., 9., 8., 7.}, {6., 5., 4., 3., 2.}};
    dense2D<double>       A(array), B;
    compressed2D<double>  T;

    B= bands(A, 1, 3);
    std::cout << "\nbands(A, 1, 3) = \n" << B;

    T= bands(A, -1, 2);
    std::cout << "\ntri_diagonal(A):= bands(A, -1, 2) = \n" << T;
        
    return 0;
}
