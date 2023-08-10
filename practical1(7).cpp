//Write C++ program to find simple interest.
#include<iostream>

using namespace std;
int main()
{
   float p, r, t, si;
    cout<< "Viradiya pinak";
    cout<< "220130318014";
   cout<<"Enter Principle Amount: ";
   cin>>p;
   cout<<"Enter Rate of Interest: ";
   cin>>r;
   cout<<"Enter Time Period: ";
   cin>>t;
   si = (p*r*t)/100;
   cout<<"\nSimple Interest Amount: "<<si;
   cout<<endl;
   return 0;
}
