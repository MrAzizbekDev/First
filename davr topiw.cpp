#include <iostream>
#include <cmath>
using namespace std;

int main()
{
  double  l,t;
   double const p=3.14,g=9.81;


   cout<<"uzinlikni kiriting: (m)";
   cin>>l;
   t=2*p*sqrt(l/g);
   cout<<t;

    return 0;
}
