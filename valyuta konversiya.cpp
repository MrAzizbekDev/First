#include <iostream>

using namespace std;

int main()
{
    double dol=10700,rub=150,rubDol=75;
    double  summa;
    int tanlov;
    cout<<"\tMENU: "<<endl;
    cout<<"1. USD > UZS."<<endl;
    cout<<"2. UZS > USD."<<endl;
    cout<<"3. RUB > UZS."<<endl;
    cout<<"4. UZS > RUB."<<endl;
    cout<<"5. USD > RUB."<<endl;
    cout<<"6. RUB > USD."<<endl;
   cin>>tanlov;
    switch(tanlov)
    {
    case 1:
        cout<<"dollar kiriting: ";
        cin>>summa;
        cout<<"Sizga "<<summa*dol<<" som tushdi!"<<endl;
        break;
    case 2:
        cout<<"somni kiriting: ";
        cin>>summa;
        cout<<"Sizga $"<<summa/dol<<" tushdi!"<<endl;
        break;
    case 3:
        cout<<"rublni kiriting: ";
        cin>>summa;
        cout<<"Sizga "<<summa*rub<<" som tushdi!"<<endl;
        break;
    case 4:
        cout<<"So'mni kiriting: ";
        cin>>summa;
        cout<<"Sizga $"<<summa/rub<<"rubl tushdi!"<<endl;
        break;
     case 5:
        cout<<"dollar kiriting: ";
        cin>>summa;
        cout<<"Sizga "<<summa*rubDol<<" rubl tushdi!"<<endl;
        break;
     case 6:
        cout<<"rublni kiriting: ";
        cin>>summa;
        cout<<"Sizga $"<<summa/rubDol<<" tushdi!"<<endl;
        break;
    default:
        cout<<"Xato!!!"<<endl;
    }
    return 0;
}
