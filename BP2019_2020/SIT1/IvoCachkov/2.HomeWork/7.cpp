#include<iostream>
#include<string>
using namespace std;

double Fninputreal(string a)
{
	double d = 0.0;
	cout << a;
	cin >> d;
	return d;
}
double Fnsum(double y)
{
	return  2 * (2 * y + 5) / (14 - y / 3);
}
int main()
{
	double a, y;
	a = Fninputreal("Please insert value a = ");
	cout << "Please insert value y = ";
	cin >> y;
	cout << "x=" << Fnsum(y) << endl;
	system("Pause");
	return 0;
}