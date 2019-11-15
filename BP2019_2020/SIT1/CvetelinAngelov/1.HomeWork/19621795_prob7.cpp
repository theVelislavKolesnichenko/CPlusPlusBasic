#include <iostream>
#include <iomanip>

using namespace std;

void main()
{
	float a, c, y;
	cout << " - Homework N1, Ex 7 - \n\n"
		<< "Entering values:\n"
		<< "A=";
	cin >> a;
	cout << "C=";
	cin >> c;
	y = sqrt(a + 2) - c * 2;
	cout << "\n\nResult:\n"
		<< "Y=" << y << endl;

	system("pause");
}

//Съставете програма която да изчисли 𝑦 = √(𝑎+2)−𝑐2 при въведени от клавиатурата стойности за a и c.