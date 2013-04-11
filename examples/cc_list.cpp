/* program to illustrate lists from STL
 *
 * Rajeev Singh
 * 2013-04-11
 *
 */

#include <iostream>
#include <list>

using namespace std;

int main() {
    list< int > ilist;

    ilist.push_front( 1 );
    ilist.push_front( 2 );
    ilist.push_back(  3 );
    ilist.push_back(  4 );

    for ( list<int>::iterator it = ilist.begin(); it != ilist.end(); it++)
        cout << *it << endl;

    int sum = 0;

    while ( ! ilist.empty() ) {
        sum += ilist.front();
        ilist.pop_front();
    }

    cout << "Sum of the list = " << sum << endl;
    return 0;
}
