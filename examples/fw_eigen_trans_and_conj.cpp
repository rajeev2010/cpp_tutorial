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
    {
    MatrixXcf a = MatrixXcf::Random(2,2);
    cout << "Here is the matrix a\n" << a << endl;

    cout << "Here is the matrix a^T\n" << a.transpose() << endl;

    cout << "Here is the conjugate of a\n" << a.conjugate() << endl;

    cout << "Here is the matrix a^*\n" << a.adjoint() << endl;
    }
    
    {
    Matrix2i a; a << 1, 2, 3, 4;
    cout << "Here is the matrix a:\n" << a << endl;

    //a = a.transpose(); // !!! do NOT do this !!!
    //cout << "and the result of the aliasing effect:\n" << a << endl;
    }

    {
    MatrixXf a(2,3); a << 1, 2, 3, 4, 5, 6;
    cout << "Here is the initial matrix a:\n" << a << endl;

    a.transposeInPlace();
    cout << "and after being transposed:\n" << a << endl;
    }

    return 0;
}

