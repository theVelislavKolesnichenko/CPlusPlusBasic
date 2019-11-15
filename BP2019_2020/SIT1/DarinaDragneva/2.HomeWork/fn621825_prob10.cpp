#include<iostream>
using namespace std;

struct rectangle
{
    float a;
    float b;
};
float Area(rectangle val)
{
    return val.a*val.b;
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
    rectangle promenliva;
    promenliva.a=float_in('a');
    promenliva.b=float_in('b');
    cout<<"Area="<<Area(promenliva)<<endl;
    return 0;
}

