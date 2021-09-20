#include <iostream>
#include<cmath>
using namespace std;

int main()
{

double a,b,c,p,s;

cout<<"tomonlarni kiriting ";

 cin>>a>>b>>c;

p=(a+b+c)/2;

cout<<"yarim perimetr "<<p<<"\n";

s=p*(p-a)*(p-b)*(p-c);

cout<<"yuzi: "<<sqrt(s);

    return 0;
}
