/* program to illustrate dynamic memory
 *
 * this example shows the C++ way of doing the job. this will not work
 * for C.
 *
 * Rajeev Singh
 * 2013-04-02
 *
 */

#include <iostream>
using namespace std;

int main() {
    int      n = 10;
    double * v = new double[n];

    for ( int i = 0; i < n; i++ )
        v[i] = double( i*i );

    cout << "n = " << n << endl;
    cout << "v:" << endl;
    for ( int j = 0; j < n; j++ ) 
        cout << " " << v[j] << endl;

    delete[] v;
    return 0;
}
