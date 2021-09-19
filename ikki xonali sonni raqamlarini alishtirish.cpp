#include <iostream>

using namespace std;

int main()
{
   double a;
   int b;
  cout<<"boyinggizni kiriting(cm): ";

  cin>>a;

  cout<<"vazningizni kiriting(kg): ";

  cin>>b;
  a = a/100;
  cout<<" sizning vazn va boyingiz balansi: "<<b/(a*a);
   return 0;
}
