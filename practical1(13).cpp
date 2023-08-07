//Write C++ Program to Calculate Sum of First n Natural Numbers using function
#include <iostream>
using namespace std;

int main()
{
    int n, sum = 0;
    cout << "Enter number natural number :: ";
    cin >> n;
    while (n > 0)
    {
        sum += n;
        n--;
    }
    cout << "\nSum is: " << sum << endl;
    return 0;
}
