#include <iostream>
using namespace std;
void proverka(int b);
int main()
{
	int b;
	cout << "Year : ";
	cin >> b;
	proverka(b);
	return 0;
}
void proverka(int b)
{
	int a = b;
	do{
		if (a % 4 == 0)
		{
			if (a % 100 == 0)
			{
				if (a % 400 == 0)
				{
					cout << a << " is a leap year.";
					cout << "Type a number less than 0 to exit." << endl;
					cout << "Year : ";
					cin >> a;
				}
				else {
					cout << a << " is not a leap year.";
					cout << "Type a number less than 0 to exit." << endl;
					cout << "Year : ";
					cin >> a;
				}
			}
			 else{
				cout << a << " is a leap year.";
			cout << "Type a number less than 0 to exit." << endl;
			cout << "Year : ";
			cin >> a; }
		}
		else{
			cout << a << " is not a leap year.";
			cout << "Type a number less than 0 to exit." << endl;
			cout << "Year : ";
			cin >> a;
		}
	} while (a >= 0);
}
