//Write a C program to enter length and breadth of a rectangle and find its perimeter & area.
#include<iostream>
using namespace std;
int main()
{
    float len, bre, area,perimeter;
     cout<< "Viradiya pinak";
    cout<< "220130318014";
    cout<<"Enter Length of Rectangle: ";
    cin>>len;
    cout<<"Enter Breadth of Rectangle: ";
    cin>>bre;
    area = (len*bre);
    cout<<"\nArea = "<<area;
    perimeter = 2*(len+bre);
    cout<<"\nPerimeter = "<<perimeter;
    cout<<endl;
    return 0;
}
