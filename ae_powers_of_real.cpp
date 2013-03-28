// Program to calculate powers of given integer.

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double given_number;
    //long double given_number;
    cout << "Enter a real number : ";
    cin  >> given_number;

    cout << "Given number = " << given_number << endl
         << "Square       = " << pow(given_number,2) << endl
         << "Square root  = " << pow(given_number,1./2) << endl
         << "Cube         = " << pow(given_number,3) << endl
         << "Forth power  = " << pow(given_number,4) << endl;

    return 1;
}
