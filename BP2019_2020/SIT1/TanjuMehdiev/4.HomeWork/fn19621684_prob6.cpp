#include <iostream>
#include <iomanip>
using namespace std;
char a(int a);
char b(int a);
char c(int a);
int main()
{
	int a;
	cout << "a)";
	cout << char(a)<<endl;
	cout << "b)";
	cout << char(b) << endl;
	cout << "c)";
	cout << char(c) << endl;
	return 0;
}

char a(int a)
{
	
	while (a!=5)
	{
		
		cout << setw(5) << setfill('%') << "" << endl;
		cout << setw(4) << setfill('%') << "" << endl;
		cout << setw(3) << setfill('%') << "" << endl;
		cout << setw(2) << setfill('%') << "" << endl;
		cout << setw(1) << setfill('%') << "" << endl;
		cin >> a;
		return a;
	}
	
}
char b(int a)
{
	
		do {
		
		cout << setw(1) << setfill('%') << "" << endl;
		cout << setw(2) << setfill('%') << "" << endl;
		cout << setw(3) << setfill('%') << "" << endl;
		cout << setw(2) << setfill('%') << "" << endl;
		cout << setw(1) << setfill('%') << "" << endl;
		cin >> a;
		return a;
	} while (a != 5);
}
char c(int a) 
{
	
	for (a = 1; a <= 5; a++) 
	{
		
		cout << setw(10) << setfill('%') << "" << endl;
		cout << ends << setw(8) << setfill('%') << "" << endl;
		cout << ends << ends << setw(6) << setfill('%') << "" << endl;
		cout << ends << ends << ends << setw(4) << setfill('%') << "" << endl;
		cout << ends << ends << ends << ends << setw(2) << setfill('%') << "" << endl;
		return a;
	}
}
