#include <iostream>
using namespace std;
double formula( int y );
int main()
{
 int y;
 y = formula(8);
  cout << y << endl;
  return 0;
}

double formula( int y )
{
  int x;
  x =  2 * ((2 * y) + 5 ) / ( 14 - ( y / 3 ));
  return x;
}
