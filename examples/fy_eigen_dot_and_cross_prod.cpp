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

using namespace Eigen;
using namespace std;
int main()
{
  Vector3d v(1,2,3);
  Vector3d w(0,1,2);

  cout << "Dot product: " << v.dot(w) << endl;
  double dp = v.adjoint()*w; // automatic conversion of the inner product to a scalar
  cout << "Dot product via a matrix product: " << dp << endl;
  cout << "Cross product:\n" << v.cross(w) << endl;
  cout << "Cross product:\n" << w.cross(v) << endl;
}
