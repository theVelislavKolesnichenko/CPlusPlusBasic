#include <iostream>
#include <math.h>
using namespace std;
void operations(float y);
int main()
{
	float y;
	cout<<"Въведете число"<<endl;
	cin>>y;
	operations(y);





return 0;
}
void operations(float y)
{
	float x;
	if (y>=58 && y<=87)  
	{
		x = pow(y,3) + (pow(y,4) + 2*y);
	    cout<<"y^3 + (y^4 + 2y)= "<<x<<endl;
	}
	else if (y>15 && y<58) 
	{
		x=2*(2*y+5)/(14-y/3);
		cout<<"2(2y+5)/(14-y/3)= "<<x<<endl;
	}
	else
		cout<<"Въведете число между 16 и 87"<<endl;
}