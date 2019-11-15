#include <iostream>
#include <iomanip>

using namespace std;

void main()
{
	float a, h, s;
	cout << " - Homework N1, Ex 9 - \n\n"
		<< "Entering values:\n"
		<< "Triangle side =";
	cin >> a;
	cout << "Height =";
	cin >> h;
	s = (a*h)/2;
	cout << "\n\nResult:\n"
		<< "S=" << s << endl;

	system("pause");
}

//Съставете програма в която да се въвеждат две реални числа за страна и височина на триъгълник и да се изведат лицето му.