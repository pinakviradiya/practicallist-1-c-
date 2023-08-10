//Write a C program to enter radius of a circle and find its diameter circumference and area
#include <iostream>
using namespace std;
int main() 
{
    float r, d , c , a ;
     cout<< "Viradiya pinak";
     cout<< "220130318014";
    cout << "Enter the radius of the circle::";
    cin >> r;
    d = 2 * r;
    c = 2 * 3.14 * r;
    a = 3.14 * (r * r);
    cout << "\n";
    cout << "Diameter      :: = " << d << " units\n";
    cout << "Circumference :: = " << c << " units\n";
    cout << "Area          :: = " << a << " sq. units\n";
    return 0;
}
