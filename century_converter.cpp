#include <iostream>
using namespace std;
int main()
{   int century;
    int year;
    int day;
    int hour;
    int minute;
    int second;


    char flag;
    cout<<"Enter the century: ";
    cin>>century;
    year=century*100;
    cout<<century<<" century is equal to "<<year<<" years\n";

    day=year*365;
    cout<<year<<" year is equal to "<<day<<" days\n";
    hour=day*24;
    cout<<day<<" days is equal to "<<hour<< " hours\n";
    minute=hour*60;
    cout<<hour<<" hours is equal to "<<minute<<" minutes\n";
    second=minute*60;
    cout<<minute<<" minutes is equal to"<<second<<" seconds\n";




    /*cout <<"enter the time ";
    cin>>hour>>flag>>minute>>flag>>second;
    cout<<"seconds:"<<hour*3600+minute*60+second;
    cout<<"\n minutes: "<<hour*60+minute*1+second*0.6;*/
    return 0;
}
