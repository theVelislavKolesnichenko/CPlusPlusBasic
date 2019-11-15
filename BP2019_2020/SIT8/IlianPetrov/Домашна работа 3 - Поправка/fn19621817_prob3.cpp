#include <iostream>
using namespace std;
void Num(double x);
int main()
{
	double x;
	cout << "x= ";
	cin >> x;

	Num(x);
	return 0;
}

void Num(double x)
{
	if (x > 0)
	{
		cout<<"Positive"<<endl;
	}
	else
	{
		cout<<"Negative"<<endl;
	}
}