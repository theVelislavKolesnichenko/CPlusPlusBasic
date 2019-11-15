#include<iostream>
#include<math.h>
using namespace std;
float Sum(float x);
int main()
{
    float x;
    cout<<"Vuvedete x = ";
    cin>>x;
    cout<<"Sumata = "<<Sum(x)<<endl;
    return 0;
}
float Sum(float x)
{
    float suma=0;
    for(int n=1;n<=20;n++)
    {

        suma=suma+pow(x,n)+1/(2*n)+1;
    }
    return suma;
}

