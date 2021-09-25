#include <iostream>

using namespace std;

int main()
{
  int a,b;
  cout<<"son kiriting ";
  cin>>a;
  char flag;
  cout<<"amalni kiriting";
  cin>>flag;
  cout<<"son kiriting ";
  cin>>b;
    switch(flag) {
case '*':
            cout<<a*b;
            break;
case '/':
            cout<<a/b;
            break;
case '+':
            cout<<a+b;
            break;
case '-':
            cout<<a-b;
            break;
    }
}
