#include <iostream>

using namespace std;
void sabirane(double x, double y)
{
    cout<<x+y;
}
void izvajdane(double x1, double y1)
{
    cout<<x1-y1;
}
void delenie(double x2, double y2)
{
    cout<<x2/y2;
}
void umnojenie(double x3, double y3)
{
    cout<<x3*y3;
}
int main()
{
    double s,s1,i,i1,d,d1,u,u1;
    cout<<"Vavedi stoinosti za subirane"<<endl;
    cin>>s>>s1;
    cout<<"Vavedi stoinosti za izvajdane"<<endl;
    cin>>i>>i1;
    cout<<"Vavedi stoinosti za delenie"<<endl;
    cin>>d>>d1;
    cout<<"Vavedi stoinosti za umnojenie"<<endl;
    cin>>u>>u1;
    cout<<endl<<s<<"+"<<s1<<"=";
    sabirane(s,s1);
    cout<<endl<<i<<"-"<<i1<<"=";
    izvajdane(i,i1);
    cout<<endl<<d<<"/"<<d1<<"=";
    delenie(d,d1);
    cout<<endl<<u<<"*"<<u1<<"=";
    umnojenie(u,u1);

}
