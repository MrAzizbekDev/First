#include <iostream>

using namespace std;

int main()
{
   int n;

   cout<<"n= ";
   cin>>n;

   long sum =0;
   int step;

   cout<< "qaysi son darajasi kerak ";
   cin>> step;

   long temp= step;
   while(temp<=n) {

    sum +=temp;
    temp*=step;
   }

    cout<<sum;
    return 0;
}
