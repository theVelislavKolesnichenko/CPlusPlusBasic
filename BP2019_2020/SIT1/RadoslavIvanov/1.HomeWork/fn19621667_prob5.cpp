#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	cout << setw(5) << setfill('%') << "%" << endl;//а)
	cout << setw(4) << setfill('%') << "%" << endl;
	cout << setw(3) << setfill('%') << "%" << endl;
	cout << setw(2) << setfill('%') << "%" << endl;
	cout << "%" << endl << endl;
	cout << "%" << endl;//б)
	cout << setw(2) << setfill('%') << "%" << endl;
	cout << setw(3) << setfill('%') << "%" << endl;
	cout << setw(2) << setfill('%') << "%" << endl;
	cout << "%" << endl << endl;
	cout << "%" << endl;//в)
	cout << setw(2) << setfill('%') << "%" << endl;
	cout << setw(3) << setfill('%') << "%" << endl;
	cout << setw(4) << setfill('%') << "%" << endl;
	cout << setw(5) << setfill('%') << "%" << endl << endl;
	cout << setw(10) << setfill('%') << "%" << endl;//г)
	cout << ends << setw(8) << setfill('%') << "%" << endl;
	cout << ends << ends << setw(6) << setfill('%') << "%" << endl;
	cout << ends << ends << ends << setw(4) << setfill('%') << "%" << endl;
	cout << ends << ends << ends << ends << setw(2) << setfill('%') << "%" << endl;
	return 0;
}