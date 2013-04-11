/* program to illustrate vector from STL
 *
 * Rajeev Singh
 * 2013-04-11
 *
 */

#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector< int > ivector;

    ivector.push_back( 1 );
    ivector.push_back( 2 );
    ivector.push_back( 3 );
    ivector.push_back( 4 );

    for ( vector<int>::iterator it = ivector.begin(); it != ivector.end(); it++)
        cout << *it << endl;

    cout << endl;
    for ( int i = 0; i < ivector.size(); i++ )
        cout << ivector[i] << endl;

    int sum = 0;

    while ( ! ivector.empty() ) {
        sum += ivector.back();
        ivector.pop_back();
    }

    cout << "Sum of the vector = " << sum << endl;
    return 0;
}
