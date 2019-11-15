#include <iostream>
using namespace std;
int one( int a );
int ten( int b );
int hun( int c );

int main()
{
 int x;
 x = one(837);
 cout<<" ones = "<< x << endl;
int y;
 y = ten(837);
 cout <<" tens = "<< y << endl;
int z;
 z = hun(837);
 cout << " hundreds = " << z << endl;


 return 0;
}

int one( int a )
{
int x;
x = a % 10;
return x;
}
int ten( int b )
{
int x;
x = (b / 10) % 10;
return x;
}
int hun( int c )
{
int x;
x = (c / 100) % 10;
return x;
}
