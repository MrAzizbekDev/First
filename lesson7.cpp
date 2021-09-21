#include <iostream>

using namespace std;

int main()
{
    /*int n;
    cin>>n;
    if((n>9)&&(n<100)&&(n%2==1)) {
    cout<<" ikki xonali toq";
    }
   else {
            cout<<"juft";
    }




    //2 xonali toq sonni topish
    /*int n;
    cin>>n;
    if((n>9)&&(n<100)&&(n%2==0)) {
    cout<<" ikki xonali juft";
    }
   else {
            cout<<"toq";
    }*/



   /* int a,b;
    cin>>a>>b;
    if((a*b)<0){
        cout<<"true";
    }
    else {
        cout<<"false";
    }*/


    /*
    int a,b;
    cin>>a>>b;
    if ((a>0&&b<0)||(a<0&&b>0))
    {
        cout<<"True"<<endl;
    }
    else
    {
        cout<<"false"<<endl;
    }*/

    int b ,n,c,d,f;
cin>>b;
   b=n/100;
   c=(n-b*100)/10;
   d=(n-b*100-c*10);
   if (b==d){
      cout<<"true";  }
     else {
        cout<<"false";
     }










  /* int a,b,c;
   cin>>a>>b>>c;



   if (a>0&&b>0&&c>0){
    cout<<"musbat=3";
   }
   else if (a>0&&b>0&&c<0){
    cout<<"musbat=2";
   }

  /* if (a*b*c>0&&a*b>0&&a*c>0){
    cout<<"musbat 3"<<" manfiy 0";

   }else if(a*b*c<0&&a*b<0&&a*c<0){
   cout<<"musbat 2 "<<"manfiy 1";}
   else if(a*b*c>0)
   {
        cout<<"musbat 1 "<<"manfiy 2";
   }
   else if(a*b*c<0)
   {
       cout<<"manfiy 3"<<endl;
   }*/
    return 0;
}
