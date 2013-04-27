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
   Matrix3f A;
   A << 1, 2, 1,
        2, 1, 0,
        -1, 1, 2;
   cout << "Here is the matrix A:\n" << A << endl;
   cout << "The determinant of A is " << A.determinant() << endl;
   cout << "The inverse of A is:\n" << A.inverse() << endl;
}
