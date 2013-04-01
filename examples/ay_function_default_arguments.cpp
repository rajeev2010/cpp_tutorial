// program to illustrate function with default arguments
//
// Rajeev Singh
// 2013-04-01

#include <iostream>
using namespace std;

double
square (const double x = 10.0) {
    return x*x;
}

int main() {
    double a = 2.5;

    cout << "a        = " << a << endl;
    cout << "a^2      = " << square(a) << endl;
    cout << "square() = " << square() << endl;

    return 0;
}
