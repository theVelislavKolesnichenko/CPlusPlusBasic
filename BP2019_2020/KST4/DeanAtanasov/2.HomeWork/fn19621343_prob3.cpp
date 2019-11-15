#include <iostream>
using namespace std;
double add( double a, double b, double c, double d);

int main()
{
 double x;
 x = add(5.6 , 7.9 , 8.3 ,5.3);
 cout << x << endl;

  return 0;




}
double add( double a, double b, double c, double d)
{
    double x  ;
    x = ( a + b + c + d) / 4;
    return x;
}




