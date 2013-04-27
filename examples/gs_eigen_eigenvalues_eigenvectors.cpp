/* program to illustrate the use of the eigen library
 *
 * example taken from eigen document
 *
 * Rajeev Singh
 * 2013-04-27
 *
 */

#include <iostream>
#include <Eigen/Dense>

using namespace std;
using namespace Eigen;

int main()
{
   Matrix2f A;
   A << 1, 2, 2, 3;
   cout << "Here is the matrix A:\n" << A << endl;
   SelfAdjointEigenSolver<Matrix2f> eigensolver(A);
   if (eigensolver.info() != Success) abort();
   cout << "The eigenvalues of A are:\n" << eigensolver.eigenvalues() << endl;
   cout << "Here's a matrix whose columns are eigenvectors of A \n"
        << "corresponding to these eigenvalues:\n"
        << eigensolver.eigenvectors() << endl;
}
