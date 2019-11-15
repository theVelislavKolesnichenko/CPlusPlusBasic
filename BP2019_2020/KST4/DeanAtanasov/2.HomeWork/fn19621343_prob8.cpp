#include <iostream>
using namespace std;
double speedF ( int a);
double timeF (double x);
int main()
{
double x;
x = speedF( 9 );
cout << x << endl;
double y;
y = timeF ( x );
cout << y << endl;


return 0;
}

double speedF ( int a)
{
 double x;
 x = 987 / a;
 return x;

}

double timeF (double x)
{
 double y;
 y = 987 / x;
 return y;
}
