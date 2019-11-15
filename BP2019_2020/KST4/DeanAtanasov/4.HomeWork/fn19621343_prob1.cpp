#include <iostream>
#include <math.h>
using namespace std;
double func (int a , int c);

int main ()
{
 int a;
 int c;
 double y;
 cout << " Enter a " << endl;
 cin >> a;
 cout << " Enter c " << endl;
 cin >> c;
 y = func ( a , c);
 cout << y << endl;
 return 0;
}

double func (int a , int c) {

 if ( a > 0 || c != 0){
  int y;
  y = sqrt(a+2) - 2 / c;
  return y;
 }
 else if ( a < 0 || c = 0){
  cout << " Invalid Input " << endl;
 }
}

