#include <iostream>

using namespace std;

int main(){
        int a;
        cout<<"faslni tanlar men sizga oylarini korsataman ";
        cin>>a;
        switch (a){
    case 1:
        cout<<" 1.dekabr\n 2.yanvar\n3.fevral";break;
    case 2:
        cout<<" 1.mart\n 2.aprel\n3.may"; break;
    case 3:
        cout<<" 1.iyun\n 2.iyul\n 3.avgust"; break;
    case 4:
        cout<<" 1.sentabr\n 2.oktabr\n 3.noyabr";break;

    default: cout<<"1 dan 4 gacha raqam kiriting"; break;}

/*
{int raqam,a,nextRaqam;
string text;

cout<<"raqam tallang (o<a;1000<a):";
cin >>raqam;
   a=raqam%10;
  switch (a){
    case 0:text="no'l"+text;break;
    case 1:text="bir"+text;break;

    case 2:text="ikki"+text;break;
    case 3:text="uch"+text;break;

     case 4:text="to'rt"+text;break;
     case 5:text="besh"+text;break;

     case 6:text="olti"+text;break;
     case 7:text="yetti"+text;break;

     case 9:text="toqqiz"+text;break;
    case 8:text="sakkiz"+text;break;
  }

        raqam=raqam-(raqam%10);
       a= raqam%100;
         switch (a){
    case 10:text="o'n " +text;break;

    case 20:text="yigirma " +text;break;
    case 30:text="o'ttiz " +text;break;

     case 40:text="qirq " +text;break;
     case 50:text="ellik " +text;break;

     case 60:text="oltmish " +text;break;
     case 70:text="yetmish " +text;break;

     case 90:text="to'qson " +text;break;
    case 80:text="sakson " +text;break;
}

            raqam=raqam-(raqam%100)-(raqam%10);
        a=raqam;
        switch(a){

        case(100):text="yuz "+text; break;
        case(200):text="ikki yuz "+text; break;

        case(300):text="uch yuz "+text;break;
        case(400):text="to'rt yuz "+text;break;

        case(500):text="besh yuz "+text;break;
        case(600):text="olti yuz "+text;break;

        case(700):text="yettiz yuz "+text;break;
        case(800):text="sakkiz yuz "+text;break;

         case(900):text="to'qqiz yuz "+text;break;

        }
     cout<<text<<endl;*/

return 0;
}
