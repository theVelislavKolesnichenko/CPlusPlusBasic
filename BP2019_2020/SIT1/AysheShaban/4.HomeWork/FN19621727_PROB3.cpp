#include <iostream>
using namespace std;

int NOK(int a, int b);
int NOD(int a, int b);

int main()
{
	float a, b;
	cout << "Vavedi dve chisla" << endl;
	cout << "a=";
	cin >> a;
	cout << "b=";
	cin >> b;
	cout << "NOD =";
	NOD(a, b);
	cout << "NOK =";
	NOK(a, b);
	return 0;
}


int NOK(int a, int b)
{
	cout<< (a * b / NOD(a,b));
	return 0;
}



int NOD(int a, int b)
{
	int r;

	while (b != 0)
	{
		r = a % b;
		a = b;
		b = r;
	}
	cout<<a<<endl;
	return 0;
}
