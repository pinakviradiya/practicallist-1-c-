//.Write C++ Program to Make a Simple Calculator with the use of switch case
#include <iostream>

using namespace std;

int main()
{
	int n1, n2, x, sum,sub,mul,div;

	cout << "Enter the options as follows: \n1.Addition \n2.Subtraction \n3.Multiplication \n4.Division";
	cout << "\nYour Option :--> ";
	cin >> x;

	cout << "Enter the number 1 :--> ";
	cin >> n1;

	cout << "Enter the number 2 :--> ";
	cin >> n2;


	switch(x)
    {
        case 1:
            sum = n1 + n2;
            cout << n1 << " + " << n2 << " = " << sum;
            break;

        case 2:
            sub = n1 - n2;
            cout << n1 << " - " << n2 << " = " << sub;
            break;

        case 3:
            mul = n1 * n2;
            cout << n1 << " * " << n2 << " = " << mul;
            break;

        case 4:
            div = n1 / n2;
            cout << n1 << " / " << n2 << " = " << div;
            break;


        default:
            cout << "Please enter the correct input";
            break;
    }
    return 0;
}
