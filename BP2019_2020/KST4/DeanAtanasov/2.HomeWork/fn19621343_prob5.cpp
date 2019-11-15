#include <iostream>
using namespace std;
double formula( int a , int b);
int main()
{
int x;
x = formula( 8 , 10);
cout << x << endl;
return 0;
}

double formula( int a , int b)
{
 int x;
 x = 2*( (a - b) / (b - a) );
 return x;
}
