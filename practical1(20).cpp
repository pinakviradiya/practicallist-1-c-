//Write C++ program to find factorial of the given number with the use of function
#include<iostream>
using namespace std;

int factorial(int n);

int main() 
{

  int n;
  cout<< "Viradiya pinak";
    cout<< "220130318014";
  cout << "Enter a positive integer: ";
  cin >> n;

  cout << "Factorial of " << n << " = " << factorial(n);

  return 0;
}

int factorial(int n) 
{
  if(n > 1)
    return n * factorial(n - 1);
  else
    return 1;
}

