#include<iostream>

using namespace std;

void sbor(double a, double b)
{
	cout << a + b;
}
void razlika(double a1, double b1)
{
	cout << a1 - b1;
}
void delenie(double a2, double b2)
{
	cout << a2 / b2;
}
void proizvedenie(double a3, double b3)
{
	cout << a3 * b3;
}
int main()
{
	double x, x1, y, y1, z, z1, d, d1;
	cout << "Vuvedi stoinosti za subirane " << endl;
	cin >> x;
	cin >> x1;
	cout << "Vuvedi stoinosti za razlika " << endl;
	cin >> y;
	cin >> y1;
	cout << "Vuvedi stoinosti za delenie " << endl;
	cin >> z;
	cin >> z1;
	cout << "Vuvedi stoinosti za proizvedenie " << endl;
	cin >> d;
	cin >> d1;
	cout << endl;
	cout << x << " + " << x1 << " = ";
	sbor(x, x1);
	cout << endl;
	cout << y << " - " << y1 << " = ";
	razlika(y, y1);
	cout << endl;
	cout << z << " / " << z1 << " = ";
	delenie(z, z1);
	cout << endl;
	cout << d << " * " << d1 << " = ";
	proizvedenie(d, d1);
	
	


}