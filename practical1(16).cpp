//Write C++ Program to Check Armstrong Number using function.
#include <iostream>
using namespace std;

int main()
 {
    int num, originalNum, remainder, result = 0;
     cout<< "Viradiya pinak";
    cout<< "220130318014";
    cout << "Enter a three-digit integer: ";
    cin >> num;
    originalNum = num;

    while (originalNum != 0) 
	{
        
        remainder = originalNum % 10;
        
        result += remainder * remainder * remainder;
        
      
        originalNum /= 10;
    }

    if (result == num)
        cout << num << " is an Armstrong number.";
    else
        cout << num << " is not an Armstrong number.";

    return 0;
}
