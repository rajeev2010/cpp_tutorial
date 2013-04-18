/* program to illustrate the use of mtl
 *
 * example taken from mtl document
 *
 * Rajeev Singh
 * 2013-04-18
 *
 */

// Filename: mixed_complex.cpp (part of MTL4)

#include <complex>
#include <iostream>
#include <boost/numeric/mtl/operation/extended_complex.hpp>

int main()
{
    std::complex<double>  z(2.0, 3.0);
    std::cout << "2 * z = " << 2 * z << '\n';
    std::cout << "2 + z = " << 2 + z << '\n';
    std::cout << "z / 2 = " << z / 2 << '\n';
    std::cout << "2 / z = " << 2 / z << '\n';
    std::cout << "2 - z = " << 2 - z << '\n';

    return 0;
}
