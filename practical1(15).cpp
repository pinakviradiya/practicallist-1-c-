//Write C++ Program to Check Whether a Number is Prime or Not using function
#include <iostream>
using namespace std;
bool check_prime(int);

int main()
 {

  int n;
  cout<< "Viradiya pinak";
  cout<< "220130318014";
  cout << "Enter a positive  integer: ";
  cin >> n;

  if (check_prime(n))
    cout << n << " is a prime number.";
  else
    cout << n << " is not a prime number.";

  return 0;
}

bool check_prime(int n) 
{
  bool is_prime = true;

  if (n == 0 || n == 1)
   {
    is_prime = false;
  }

  for (int i = 2; i <= n / 2; ++i) 
  {
    if (n % i == 0)
	 {
      is_prime = false;
      break;
    }
  }

  return is_prime;
  return 0;
}
