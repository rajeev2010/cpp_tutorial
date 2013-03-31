// program to illustrate call by reference feature
//
// Rajeev Singh
// 2013-03-31

#include <iostream>
using namespace std;

int
f (int & n) {
    n = 10;
    return n;
}

int main() {
    int m = 5;

    cout << "m before calling = " << m    << endl;
    cout << "funtion output   = " << f(m) << endl;
    cout << "m after calling  = " << m    << endl;

    return 0;
}
