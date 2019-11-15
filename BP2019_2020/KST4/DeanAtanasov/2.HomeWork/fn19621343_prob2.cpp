#include <iostream>
using namespace std;
double math1(int a, int b);
double math2(int a, int b);
double math3(int a, int b);
double math4(int a, int b);
int main()



{
 int x;
 x = math1(6,7);
 cout << x << endl;
 int y = math2(7,4);
 cout << y << endl;
 int z;
 z = math3(9,9);
 cout << z << endl;
 int v;
 v = math4(9,11);
 cout << v << endl;
 return 0;
}

double math1(int a, int b)
{
int x;
x = a + b;
return x;
}
double math2(int a, int b)
{int x;
x = a - b;
return x;}

double math3(int a, int b)
{int x;
x = a / b;
return x;
}
double math4 (int a,int b)
{
int x;
x = a * b;
return x;
}

