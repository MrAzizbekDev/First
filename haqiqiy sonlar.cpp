#include <iostream>
#include <cmath>
using namespace std;

int main()
{
  double x,y,z;

  cout<<" x va y ni kiriting ";
  cin>>x>>y;
  z=(fabs(x)-fabs(y))/(1+fabs(x)*fabs(y));
  cout<<"z = "<<z;
    return 0;
}
