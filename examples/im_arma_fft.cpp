/* program to illustrate the use of the armadillo library
 *
 * example taken from armadillo document
 *
 * Rajeev Singh
 * 2013-05-02
 *
 */

#include <iostream>
#include <armadillo>

using namespace std;
using namespace arma;

int main(int argc, char** argv)
{
vec X = randu<vec>(100);
cx_vec Y = fft(X, 128);
Y.print("\n\nY:");

return 0;
}
