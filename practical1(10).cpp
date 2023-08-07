//Write C++ Program to Find Largest Among 3 Numbers.
#include <iostream>
using namespace std;

int main()
 {
    
    double n1, n2, n3;

    cout << "Enter one numbers: ";
    cin >> n1;
    cout << "Enter second numbers: ";
    cin >> n2;
    cout << "Enter third numbers: ";
    cin >> n3;
    
    if(n1 >= n2 && n1 >= n3)
        cout << "Largest number: " << n1;

   
    else if(n2 >= n1 && n2 >= n3)
        cout << "Largest number: " << n2;
    
   
    else 
        cout << "Largest number: " << n3;
  
    return 0;
}
