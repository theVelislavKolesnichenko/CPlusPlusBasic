#include <iostream>
using namespace std;

struct Triangle
{
    int a;
    int b;
    int c;

};
Triangle fun1(Triangle& w);
float p(float x,float y,float z);
int main()
{
    Triangle t1;
    fun1(t1);
    cout<<"Perimetara e: "<< p(t1.a,t1.b,t1.c);

    return 0;
}

Triangle fun1(Triangle& w)
{
   cout << "Vavedete strana a: ";
   cin>>w.a;
   cout << "Vavedete strana b: ";
   cin>>w.b;
   cout << "Vavedete strana c: ";
   cin>>w.c;

   return w;
}
float p(float x,float y,float z)
{
    return x+y+z;
}
