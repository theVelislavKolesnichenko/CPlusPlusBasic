#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	cout << setfill('%') << setw(5);
	cout << "%" << endl;
	cout << setfill('%') << setw(4);
	cout << "%" << endl;
	cout << setfill('%') << setw(3);
	cout << "%" << endl;
	cout << setfill('%') << setw(2);
	cout << "%" << endl;
	cout << setfill('%') << setw(1);
	cout << "%" << endl << endl;


	cout << setfill('%') << setw(1);
	cout << "%" << endl;
	cout << setw(2)<< setfill('%') << setw(2);
	cout << "%" << endl;
	cout << setfill('%') << setw(3);
	cout << "%" << endl;
	cout << setfill('%') << setw(2);
	cout << "%" << endl;
	cout << setfill('%') << setw(1);
	cout << "%" << endl << endl;


	cout << setfill('%') << setw(1);
	cout << "%" << endl;
	cout << setfill('%') << setw(2);
	cout << "%" << endl;
	cout << setfill('%') << setw(3);
	cout << "%" << endl;
	cout << setfill('%') << setw(4);
	cout << "%" << endl;
	cout << setfill('%') << setw(5);
	cout << "%" << endl << endl;


	cout << setfill('%') << setw(10);
	cout << "%" << endl << " ";
	cout << setfill('%') << setw(8);
	cout << "%" << endl << "  ";
	cout << setfill('%') << setw(6);
	cout << "%" << endl << "   ";
	cout << setfill('%') << setw(4);
	cout << "%" << endl << "    ";
	cout << setfill('%') << setw(2);
	cout << "%" << endl << endl;


	return 0;
}