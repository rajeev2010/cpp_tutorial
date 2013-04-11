/* program to illustrate the use of auto-pointers from STL
 *
 * Rajeev Singh
 * 2013-04-11
 *
 */

#include <iostream>
#include <memory>
using namespace std;

int main () {
    {
        double   x[100];
        double * y = new double[100];
    } // "x" is deallocated, but not "y"

    {
        double   x[100];
        auto_ptr< double > y( new double[100] );
    } // both "x" and "y" are deallocated

    cout << "done" << endl;

  return 0;
}

