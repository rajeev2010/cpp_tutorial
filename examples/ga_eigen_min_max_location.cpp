/* program to illustrate the use of the eigen library
 *
 * example taken from eigen document
 *
 * Rajeev Singh
 * 2013-04-19
 *
 */

#include <iostream>
#include <Eigen/Dense>

using namespace std;
using namespace Eigen;

int main() { 
    Matrix3f m = Matrix3f::Random();
    //std::ptrdiff_t i, j;
    int i, j;
    float minOfM = m.minCoeff(&i,&j);
    cout << "Here is the matrix m:\n" << m << endl;
    cout << "Its minimum coefficient (" << minOfM 
         << ") is at position (" << i << "," << j << ")\n\n";

    RowVector4i v = RowVector4i::Random();
    int maxOfV = v.maxCoeff(&i);
    cout << "Here is the vector v: " << v << endl;
    cout << "Its maximum coefficient (" << maxOfV 
         << ") is at position " << i << endl;

    return 0;
}
