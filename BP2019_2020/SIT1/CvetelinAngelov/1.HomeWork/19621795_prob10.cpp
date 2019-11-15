#include <iostream>
#include <iomanip>

using namespace std;

void main()
{
	float a, b, s, p;
	cout << " - Homework N1, Ex 10 - \n\n"
		<< "Entering values:\n"
		<< "A=";
	cin >> a;
	cout << "B=";
	cin >> b;
	p = 2*a+2*b;
	s = a * b;
	cout << "\n\nResult:\n"
		<< "P=" << p << endl
		<< "S=" << s << endl;
	system("pause");
}

//Съставете програма в която да се въвеждат две реални числа за страните на правоъгълник и да се изведат обиколката и лицето му.