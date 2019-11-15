#include <iostream>
using namespace std;

struct Rectangle
{
    int a;
    int b;


};
Rectangle fun1(Rectangle& w);
float p(float x,float y);
int main()
{
    Rectangle r1;
    fun1(r1);
    cout<<"Liceto e: "<< p(r1.a,r1.b);

    return 0;
}

Rectangle fun1(Rectangle& w)
{
   cout << "Vavedete strana a: ";
   cin>>w.a;
   cout << "Vavedete strana b: ";
   cin>>w.b;


   return w;
}
float p(float x,float y)
{
    return x*y;
}
