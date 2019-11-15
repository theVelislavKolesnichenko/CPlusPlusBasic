#include <iostream>
#include <math.h>
using namespace std;
int main()
{

 int y;
 y = 38;
 if ( 58 <= y && y <=  87){
    cout << " x = " << pow( y , 3) + ( pow(y,4) + (2*y));
 }
 else if ( 15 < y && y < 58  ) {
   cout << " x = " << 2*((2*y) + 5) / (14 - (y / 3) );
 }
   return 0;



}
