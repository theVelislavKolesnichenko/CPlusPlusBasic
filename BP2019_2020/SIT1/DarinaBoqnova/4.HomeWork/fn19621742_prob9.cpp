#include <iostream>
using namespace std;

void year(int d);

int main()
{
	int d;
	cout << "Year : ";
	cin >> d;
	year(d);

	system("Pause");
	return 0;
}

void year(int d)
{
	int a = d;
	do {
		if (a % 4 == 0)
		{
			if (a % 100 == 0)
			{
				if (a % 400 == 0)
				{
					cout << a << " is a leap year."<<endl;
					cout << "To stop the program, insert number that is less than 0." << endl;
					cout << "Year : ";
					cin >> a;
				}
				else {
					cout << a << " is not a leap year."<<endl;
					cout << "To stop the program, insert number that is less than 0." << endl;
					cout << "Year : ";
					cin >> a;
				}
			}
			else {
				cout << a << " is a leap year."<<endl;
				cout << "To stop the program, insert number that is less than 0." << endl;
				cout << "Year : ";
				cin >> a;
			}
		}
		else {
			cout << a << " is not a leap year."<<endl;
			cout << "To stop the program, insert number that is less than 0." << endl;
			cout << "Year : ";
			cin >> a;
		}
	} while (a >= 0);
}
