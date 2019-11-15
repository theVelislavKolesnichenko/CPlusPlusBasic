#include <iostream>

using namespace std;
double chislo(double y)
{

	if (y > 0 & y < 1) {
		
		cout << "Baby";
	}
	else if (y >= 1 & y < 3) {
		
		cout << "Toddler";
	}
	else if (y >= 3 & y < 5)
	{
		cout << "Preschool";
	}
	else if (y >= 5 & y <= 12)
	{
		cout << "Gradeschooler";
	}
	else if (y >= 13 & y < 18)
	{
		cout << "Teen";
	}
	else if (y >= 18 & y < 21)
	{
		cout << "Young Adult";
	}
	else
	{
		cout << "druga ";
	}
	return 0;
}
void main() {
	double y;
	cout << "vyvedi " << endl;;
	cin >> y;
	cout << "stoinost na x" << chislo(y) << endl;


}