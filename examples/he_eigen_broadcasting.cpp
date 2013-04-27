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
  Eigen::VectorXf v(2);
  
  mat << 1, 2, 6, 9,
         3, 1, 7, 2;
         
  v << 0,
       1;
       
  //add v to each column of m
  mat.colwise() += v;
  
  std::cout << "Broadcasting result: " << std::endl;
  std::cout << mat << std::endl;
}
