#include <iostream>
#include <iomanip>

using namespace std;

void main()
{
	float a, b, c, z;
	cout << " - Homework N1, Ex 6 - \n\n"
		<< "Entering values:\n"
		<< "A=";
	cin >> a;
	cout << "B=";
	cin >> b;
	cout << "C=";
	cin >> c;
	z = 2 * (a - b)*(a - c);
	cout << "\n\nResult:\n"
		<< "Z=" << z<<endl;

	system("pause");
}

//Съставете програма която да изчисли 𝑧 = 2(𝑎−𝑏)(𝑎−𝑐) при въведени от клавиатурата стойности за a, b и c.