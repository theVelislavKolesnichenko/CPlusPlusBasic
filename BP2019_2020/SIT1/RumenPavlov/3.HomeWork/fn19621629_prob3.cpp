#include <iostream>
using namespace std;
void check(float a);
int main()
{
	float a;
	cout<<"Въведете число"<<endl;
	cin>>a;
	check(a);





return 0;
}
void check(float a)
{
	if (a>0)
		cout<<"Positive"<<endl;
	else if (a==0)
		cout<<"Neutral"<<endl;
	else 
		cout<<"Negative"<<endl;
}