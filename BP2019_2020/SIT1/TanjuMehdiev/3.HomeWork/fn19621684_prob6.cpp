#include <iostream> <math.h>
using namespace std;
double urav1(double y);

int main()
{
	int y;
	cout<<"y=";
	cin>>y;
	cout<<"reshenieto na uravnenieto e:"<<urav1(y)<<endl;
	return 0;
}
double urav1(double y)
{
	if((y>=58)&&(y<=87))
	{
		return y*y*y+(y*y*y*y+2*y);
	}
	else if((y>15)&&(y<58))
	{
		return 2*(2*y+5)/(14-y/3);
	}
	
}