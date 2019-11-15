#include <iostream>

using namespace std;
float find_greater_digit(float digit_1, float digit_2);

int main()
{
	float digit_1, digit_2;
	cout << "Enter two digits:\n";
	cin >> digit_1 >> digit_2;
	cout << "greater digit is: " << find_greater_digit(digit_1, digit_2);
}

float find_greater_digit(float digit_1, float digit_2)
{
	if (digit_1 > digit_2)
	{
		return digit_1;
	}
	else
	{
		return digit_2;
	}

}
