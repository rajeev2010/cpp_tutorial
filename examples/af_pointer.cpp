// Program to illustrate pointers.

#include <iostream>
using namespace std;

int main() {
    int n = 10;
    int *np = NULL;

    cout << "Initial" << endl
         << "n   = " << n   << endl
         << "np  = " << np  << endl
         << "*np = " << "since np is NULL, printing *np gives segmentation fault"  << endl << endl; 

    np = &n;
    cout << "After: np = &n" << endl
         << "n   = " << n   << endl
         << "np  = " << np  << endl
         << "*np = " << *np << endl << endl;

    *np = 22;
    cout << "After: *np = 22" << endl
         << "n   = " << n   << endl
         << "np  = " << np  << endl
         << "*np = " << *np << endl << endl;

    return 0;
}
