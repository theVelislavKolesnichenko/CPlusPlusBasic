#include <iostream>
using namespace std;
void operation(float y);
int main()
{
	float y;
	cout<<"Въведете число"<<endl;
	cin>>y;
	operation(y);





return 0;
}
void operation(float y)
{
	float x;
	if (y==0)
		cout<<"На 0 не се дели"<<endl;
	else 
		x=20/y;
		cout<<"x=20/y= "<<x<<endl;
}