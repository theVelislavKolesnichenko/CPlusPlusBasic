#include <iostream>

using namespace std;

void isPositive_Number();


int main()
{
	isPositive_Number();
}

void isPositive_Number();
{
	float digit;
	cout << "please enter number:\n";
	cin >> digit;
	if (digit > 0)
	{
		printif("positive");
	}
	else
	{
		printif("negative");
	}

}