/* program to illustrate valarray from STL
 *
 * Example taken from:
 * http://www.cplusplus.com/reference/valarray/valarray/operators/
 *
 * Rajeev Singh
 * 2013-04-11
 *
 */

// valarray operators example
#include <iostream>
#include <valarray>
using namespace std;

void print_all( valarray<int> & foo, valarray<int> & bar ) {
  cout << endl << "foo:   " << "bar:" << endl;
  for (int i = 0; i < foo.size(); i++ )
      cout << foo[i] << "     " << bar[i] << endl;
}

int main () {
  int init[]= {10,20,30,40};
                                //     foo:           bar:

  valarray<int> foo (init, 4);  //  10 20 30 40    
  valarray<int> bar (25,4);     //  10 20 30 40    25 25 25 25
  print_all(foo, bar);

  bar += foo;                   //  10 20 30 40    35 45 55 65
  print_all(foo, bar);

  foo = bar + 10;               //  45 55 65 75    35 45 55 65
  print_all(foo, bar);

  foo -= 10;                    //  35 45 55 65    35 45 55 65
  print_all(foo, bar);

  valarray<bool> comp = (foo==bar);

  if ( comp.min() == true )
	  cout << "They are equal.\n";
  else
	  cout << "They are not equal.\n";

  return 0;
}

