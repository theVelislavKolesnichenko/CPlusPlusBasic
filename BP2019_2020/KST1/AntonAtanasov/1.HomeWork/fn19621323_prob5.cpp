#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	cout << "a)" << endl;
	cout << setfill('%') << ' ' << setw(6) << ' ' << endl;
	cout << setfill('%') << ' ' << setw(5) << ' ' << endl;
	cout << setfill('%') << ' ' << setw(4) << ' ' << endl;
	cout << setfill('%') << ' ' << setw(3) << ' ' << endl;
	cout << setfill('%') << ' ' << setw(2) << ' ' << endl << endl;
	cout << "b)" << endl;
	cout << setfill('%') << ' ' << setw(2) << ' ' << endl;
	cout << setfill('%') << ' ' << setw(3) << ' ' << endl;
	cout << setfill('%') << ' ' << setw(4) << ' ' << endl;
	cout << setfill('%') << ' ' << setw(3) << ' ' << endl;
	cout << setfill('%') << ' ' << setw(2) << ' ' << endl << endl;
	cout << "c)" << endl;
	cout << setfill('%') << ' ' << setw(2) << ' ' << endl;
	cout << setfill('%') << ' ' << setw(3) << ' ' << endl;
	cout << setfill('%') << ' ' << setw(4) << ' ' << endl;
	cout << setfill('%') << ' ' << setw(5) << ' ' << endl;
	cout << setfill('%') << ' ' << setw(6) << ' ' << endl << endl;
	cout << "d)" << endl;
	cout << setfill('%') << ' ' << setw(11) << ' ' << endl;
	cout << setfill('%') << "  " << setw(10) << "  " << endl;
	cout << setfill('%') << "   " << setw(9) << "   " << endl;
	cout << setfill('%') << "    " << setw(8) << "    " << endl;
	cout << setfill('%') << "     " << setw(7) << "     " << endl;

	return 0;
}
