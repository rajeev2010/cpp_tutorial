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
   MatrixXd A = MatrixXd::Random(100,100);
   MatrixXd b = MatrixXd::Random(100,50);
   MatrixXd x = A.fullPivLu().solve(b);
   double relative_error = (A*x - b).norm() / b.norm(); // norm() is L2 norm
   cout << "The relative error is:\n" << relative_error << endl;
}
