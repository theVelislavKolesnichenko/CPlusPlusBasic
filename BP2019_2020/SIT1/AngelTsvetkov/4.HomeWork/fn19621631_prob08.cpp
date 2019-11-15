#include <iostream>
using namespace std;
void proverka(int b);
int main()
{
	int b;
	cout << "Write a number: ";
	cin >> b;
	proverka(b);
	return 0;
}
void proverka(int b)
{
	int a = b;
	do{
		if ((a >= 1000) && (a <= 9999))
		{
			cout << "four-digit" << endl;
			cout << "Type 0 to exit." << endl;
			cout << "Write a number: ";
			cin >> a;
				}
		else if ((a < 1000)&&(a!=0))
		{
			cout << "Less four-digit" << endl;
			cout << "Type 0 to exit." << endl;
			cout << "Write a number: ";
			cin >> a;
		}
		else if (a>9999)
		{
			cout << "More four-digit" << endl;
			cout << "Type 0 to exit." << endl;
			cout << "Write a number: ";
			cin >> a;
		}
	}
while (a != 0);
}