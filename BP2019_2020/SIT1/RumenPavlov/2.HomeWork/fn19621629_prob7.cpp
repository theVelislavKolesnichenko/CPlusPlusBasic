#include <iostream>
using namespace std;
int smetki(float y);
int main()
{
	cout<<"Въведете 2 променливи"<<endl;
			float y, smetka;
	cin>>y; 
	cout<<"y= "<<y<<endl;
	smetka = smetki(y);
	cout<<"x = 2(2y+5)/(14-y/3) =  "<<smetka<<endl;

	return 0; 
}
int smetki(float y)
{
	float x;
	x= 2*(2*y+5)/(14-y/3);
	return x;
}