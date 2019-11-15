#include <iostream>
using namespace std;
void fun( int x);

int main()
{
 int x = 0;
 fun (x);
 cout << x << endl;



}

void fun( int x){
while ( x <= 7 ){
 cout << x << endl;
 x = x + 1;

}
}
