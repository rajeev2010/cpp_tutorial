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
  MatrixXd m = MatrixXd::Random(2,6);
  cout << "m =" << endl << m << endl;
  m.resize(4,3);
  cout << "m =" << endl << m << endl;
  std::cout << "The matrix m is of size "
            << m.rows() << "x" << m.cols() << std::endl;
  std::cout << "It has " << m.size() << " coefficients" << std::endl;
  VectorXd v(2);
  v.resize(5);
  std::cout << "The vector v is of size " << v.size() << std::endl;
  std::cout << "As a matrix, v is of size "
            << v.rows() << "x" << v.cols() << std::endl;
}
