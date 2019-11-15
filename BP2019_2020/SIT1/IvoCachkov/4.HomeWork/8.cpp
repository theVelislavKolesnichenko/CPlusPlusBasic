#include <iostream>
using namespace std;

void numbers(int b);

int main()
{
	int b;
	cout << "Write a number: ";
	cin >> b;
	numbers(b);

	system("Pause");
	return 0;
}

void numbers(int b)
{
	int p = b;
	do {
		if ((p >= 1000) && (p <= 9999))
		{
			cout << "4-digit" << endl;
			cout << "To stop the program, type 0." << endl;
			cout << "Enter number here - ";
			cin >> p;
		}
		else if ((p < 1000) && (p != 0))
		{
			cout << "less than 4-digit" << endl;
			cout << "To stop the program, type 0." << endl;
			cout << "Enter number here - ";
			cin >> p;
		}
		else if (p > 9999)
		{
			cout << "more than 4-digit" << endl;
			cout << "To stop the program, type 0." << endl;
			cout << "Enter number here - ";
			cin >> p;
		}
	} while (p != 0);
}