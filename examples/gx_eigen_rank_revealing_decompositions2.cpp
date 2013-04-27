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
   Matrix2d A;
   A << 2, 1,
        2, 0.9999999999;
   FullPivLU<Matrix2d> lu(A);
   cout << "By default, the rank of A is found to be " << lu.rank() << endl;
   lu.setThreshold(1e-5);
   cout << "With threshold 1e-5, the rank of A is found to be " << lu.rank() << endl;
}
