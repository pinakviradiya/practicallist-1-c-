//Write C++ Program to Calculate the Power of a Number using function
#include <iostream>
using namespace std;

int main() 
{
    int exponent;
    float base, result = 1;

    cout << "Enter the power of a number ::  ";
    cin >> base >> exponent;
    

    cout << base << "^" << exponent << " = ";

    while (exponent != 0)
	 {
        result *= base;
        --exponent;
    }

    cout << result;
    
    return 0;
}
