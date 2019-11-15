#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	cout << "a)\n" << setw(5) << setfill('%') << '%' << endl << setw(4)
		<< setfill('%') << '%' << endl << setw(3) << setfill('%') <<
		'%' << endl << setw(2) << setfill('%') << '%' << endl << "%\n\n";
	cout << "b)\n" << '%' << endl << setw(2) << setfill('%') << '%' << endl <<
		setw(3) << setfill('%') << '%' << endl << setw(2) << setfill('%') << '%'
		<< endl << "%\n\n";
	cout << "c)\n" << "%\n" << setw(2) << setfill('%') << '%' << endl <<
		setw(3) << setfill('%') << '%' << endl << setw(4) << setfill('%') << '%'
		<< endl << setw(5) << setfill('%') << '%' << endl;
	cout << "\nd)\n" << setw(10) << setfill('%') << '%' << endl << ' ' <<
		setw(8) << setfill('%') << '%' << endl << "  " << setw(6) << setfill('%')
		<< '%' << endl << "   " << setw(4) << setfill('%') << '%' << endl << "    "
		<< setw(2) << setfill('%') << '%';
}









