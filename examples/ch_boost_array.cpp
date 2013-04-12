/* program to illustrate the use of boost::array
 *
 * Rajeev Singh
 * 2013-04-12
 *
 */

#include <iostream>
#include <boost/array.hpp>
using namespace std;
using namespace boost;

void print_all( array<int,4> & foo, array<int,4> & bar ) {
  cout << endl << "foo:   " << "bar:" << endl;
  for (int i = 0; i < foo.size(); i++ )
      cout << foo[i] << "     " << bar[i] << endl;
}

int main () {
                                //     foo:           bar:

  array<int,4> foo = {10,20,30,40};      //  10 20 30 40    
  array<int,4> bar = {25} ;     //  10 20 30 40    25 25 25 25
  print_all(foo, bar);
  
  //foo += bar; // doesn't work as '+' is not overloaded
                // not really sure what is the use of it
  return 0;
}

