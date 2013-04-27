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
int main()
{
  Eigen::MatrixXf mat(2,4);
  mat << 1, 2, 6, 9,
         3, 1, 7, 2;
  
  std::cout << "Column's maximum: " << std::endl
   << mat.colwise().maxCoeff() << std::endl;
}
