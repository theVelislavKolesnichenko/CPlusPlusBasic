#include <iostream>

using namespace std;

int main()
{
    int a,b,c;
    float d;
    cout<<"Vuvedete a=";
    cin>>a;
    cout<<"Vuvedete b=";
    cin>>b;
    c=a/b;
    cout<<"Rezultatut e:"<<c<<endl<< "Do tuk e a)"<<endl; // Rezultatut e cqlo chislo zaradi izpolzvaneto na "int"
    cout<<"Sledva b)"<<endl<<"Vuvedete otnovo a=";
    cin>>a;
    cout<<"Vuvedete otnovo b=";
    cin>>b;
    d=float(a)/b;
    cout<<"Rezultatut e:"<<d; //Rezultatut e drobno chislo zaradi izpolzvaneto na "float"
    return 0;
}
