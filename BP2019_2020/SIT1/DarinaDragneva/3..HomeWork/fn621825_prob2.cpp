#include<iostream>
using namespace std;
void Po_golqmo(float a, float b)
{
    if (a>b)
    {
        cout<<"Po-golqmoto chislo e: "<<a<<endl;
    }
    else
    {
        cout<<"Po-golqmoto chislo e: "<<b<<endl;
    }

}
int main()
{
    float a,b;
    cout<<"Vuvedete a= ";
    cin>>a;
    cout<<"Vuvedete b= ";
    cin>>b;
    Po_golqmo(a,b);
    return 0;
}


