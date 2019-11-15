#include<iostream>
#include <iomanip>
using namespace std;

int main()
{
	cout << left;

	cout << setfill('%');
	cout << setw(5) << "" << endl;
	cout << setw(4) << "" << endl;
	cout << setw(3) << "" << endl;
	cout << setw(2) << "" << endl;
	cout << setw(1) << "" << endl;


	cout << endl;

	cout << setw(1) << "" << endl;
	cout << setw(2) << "" << endl;
	cout << setw(3) << "" << endl;
	cout << setw(2) << "" << endl;
	cout << setw(1) << "" << endl;

	cout << endl;

	cout << setw(1) << "" << endl;
	cout << setw(2) << "" << endl;
	cout << setw(3) << "" << endl;
	cout << setw(4) << "" << endl;
	cout << setw(5) << "" << endl;


	cout << endl;

	
	cout << setfill(' ') << setw(1) << "" << setfill('%') << setw(10) << "" << endl;
	cout << setfill(' ') << setw(2) << "" << setfill('%') << setw(8) << "" << endl;
	cout << setfill(' ') << setw(3) << "" << setfill('%') << setw(6) << "" << endl;
	cout << setfill(' ') << setw(4) << "" << setfill('%') << setw(4) << "" << endl;
	cout << setfill(' ') << setw(5) << "" << setfill('%') << setw(2) << "" << endl;
	
	return 0;
}
