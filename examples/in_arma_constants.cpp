/* program to illustrate the use of the armadillo library
 *
 * example taken from armadillo document
 *
 * Rajeev Singh
 * 2013-05-02
 *
 */

#include <iostream>
#include <armadillo>

using namespace std;
using namespace arma;

int main(int argc, char** argv)
{
cout << "2.0 * pi = " << 2.0 * datum::pi << endl;

cout << "speed of light = " << datum::c_0 << endl;

cout << "log_max for floats = ";
cout << fdatum::log_max << endl;

cout << "log_max for doubles = ";
cout << datum::log_max << endl;

return 0;
}
