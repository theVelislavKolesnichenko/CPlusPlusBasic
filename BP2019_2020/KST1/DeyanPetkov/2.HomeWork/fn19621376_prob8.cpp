#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;
const int km(987);
double skorost(double s);
double vreme (double v);
int main()
{
    int s,v;
    cout<<"Vuvedete za kolko chasa trqbva da pristigne vlakut:";
    cin>>s;
    cout<<"Neobhodimata skorost za da pristigne za tova vreme e:"<<skorost(s)<<"km/h";
    cout<<"\n Vuvedete skorostta, s koqto se dviji vlakut";
    cin>>v;
    cout<<"Vremeto, za koeto shte pristigne vlakut s tazi skorost e:"<<vreme(v)<<"chasa";
    return 0;
    }
    double skorost(double s)
    {
        return km / s;
    }
    double vreme (double v)
    {
        return km / v;
    }
