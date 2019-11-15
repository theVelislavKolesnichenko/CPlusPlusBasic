#include<iostream>
using namespace std;

struct triangle
{
    float a;
    float b;
    float c;
};
float Perimeter(triangle val)
{
    return val.a+val.b+val.c;
}
float float_in(char ch)
{
    float f;
    cout<<ch<<"=";
    cin>>f;
    return f;
}
int main()
{
    triangle promenliva;
    promenliva.a=float_in('a');
    promenliva.b=float_in('b');
    promenliva.c=float_in('c');
    cout<<"Perimeter="<<Perimeter(promenliva)<<endl;
    return 0;
}

