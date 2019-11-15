#include <iostream>

using namespace std;
 

void fun1(double y)

{

	double x;

	x = 2 * (2 * y + 5) / (14 - y / 3);

	cout << x;


}

int main()

{
	double ch1, ch2;

	cout << "vuvedi dve chisla";
 cin >> ch1 >> ch2;

	cout << endl << "rezultata ot formulata za ch1 e:";
 fun1(ch1);

	cout << endl << "rezultata ot formulata za ch2 e:";
 fun1(ch2);


}