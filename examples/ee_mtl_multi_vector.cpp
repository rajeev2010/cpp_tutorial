/* program to illustrate the use of mtl
 *
 * example taken from mtl document
 *
 * Rajeev Singh
 * 2013-04-16
 *
 */

// File: multi_vector.cpp

#include <iostream>
#include <boost/numeric/mtl/mtl.hpp>

int main(int, char**)
{
    using namespace mtl;

    typedef dense_vector<double>   Vector;

    Vector                      v(2, 3.4), w(3, 2.5);
    mtl::multi_vector<Vector>   A(2, 3);    
    dense2D<double>             B(2,2), C(3,2), D(3,3);

    // Initialize matrices
    A= 3.0; B= 4.0; C= 5.0; D= 6.0;

    // vector= multi_vector * vector
    v= A * w;
    std::cout << "v = " << v << std::endl;

    // vector= transposed multi_vector * vector
    w= trans(A) * v;
    std::cout << "w = " << w << std::endl;

    // vector= matrix * vector 
    v= B * A.vector(1);         
    std::cout << "v = " << v << std::endl;

    // vector= matrix * vector
    A.vector(0)= B * A.vector(1);       
    std::cout << "A.vector(0) = " << A.vector(0) << std::endl;

    // Orthogonalize multi_vector
    orth(A);
    std::cout << "A = " << A << std::endl;

    return 0;
}
