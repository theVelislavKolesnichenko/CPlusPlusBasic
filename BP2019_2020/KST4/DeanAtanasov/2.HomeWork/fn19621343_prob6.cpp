#include <iostream>
#include <math.h>
using namespace std;
double formula( int a , int b);
int main()
{
 int x;
 x = formula( 3 , 5);
 cout << x << endl;
 return 0;
}

double formula( int a , int b)
{
int x;
x = 2*pow((a + b),3) + (pow (a , 2) + (2*a*b)- (2*b*a)+ pow (b,2));
return x;


}
