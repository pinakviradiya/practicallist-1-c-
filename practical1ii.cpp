//Write a C program to enter two numbers and perform all arithmetic operations
#include <iostream>
using namespace std;

int main() 
{
    int p, q;
    int sum, sub, mul, mod;
    float div;
    
    cout<< "Enter one numbers :: ";
    cin >> p;
    cout<<"Enter second number ::";
    cin >> q;

    sum = p + q;
    sub = p - q;
    mul = p * q;
    div = p / q;
    mod = p % q;

    cout << endl;
    cout << "ADDTION        " << p << " + " << q << " = " << sum << "\n";
    cout << "SUBSTRATION " << p << " - " << q << " = " << sub << "\n";
    cout << "MULTIPLICATION     " << p << " * " << q << " = " << mul << "\n";
    cout << "QUOTIENT   " << p << " / " << q << " = " << div << "\n";
    cout << "MODULUS    " << p << " % " << q << " = " << mod << "\n";
    return 0;
}
