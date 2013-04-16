/* program to illustrate the use of mtl
 *
 * example taken from mtl document
 *
 * Rajeev Singh
 * 2013-04-16
 *
 */

#include <iostream>
#include <boost/numeric/mtl/mtl.hpp>

int main(int, char**)
{
    using namespace mtl; using namespace mtl::matrix;
    
    const unsigned n= 20;
    dense2D<double>                            A(n, n), B(n, n);
    morton_dense<double, doppled_64_row_mask>  C(n, n);

    hessian_setup(A, 3.0); hessian_setup(B, 1.0); 
    hessian_setup(C, 2.0);

    // Corresponds to A= B * B;
    mult(B, B, A);

    A= B * B;   // use BLAS
    A= B * C;   // use recursion + tiling from MTL4

    A+= B * C;  // Increment A by the product of B and C
    A-= B * C;  // Likewise with decrement
    
    std::cout << "The matrices are: A=\n" << A << "B=\n" << B << "C=\n" << C;

    return 0;
}
