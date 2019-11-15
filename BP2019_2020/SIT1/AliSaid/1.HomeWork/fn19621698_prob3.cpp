#include <iostream>
#include <string>
using namespace std;

int main()
{
	string units = "Units " + to_string(576 % 10) + " ";
	string tens = "Tens " + to_string(576 / 10 % 10) + " ";
	string hundreds = "Hundreds " + to_string(576 / 100 % 10);
	cout << units << tens << hundreds << endl;

	return 0;
}
