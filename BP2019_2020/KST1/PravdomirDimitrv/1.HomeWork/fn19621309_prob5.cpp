#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	
	cout << setiosflags(ios::left) << setfill('%') << setw(5) << "%" << endl;
	cout << setiosflags(ios::left) << setfill('%') << setw(4) << "%" << endl;
	cout << setiosflags(ios::left) << setfill('%') << setw(3) << "%" << endl;
	cout << setiosflags(ios::left) << setfill('%') << setw(2) << "%" << endl;
	cout << setiosflags(ios::left) << setfill('%') << setw(1) << "%" << endl;
	
	cout << setiosflags(ios::left) << setfill('%') << setw(1) << "%" << endl;
	cout << setiosflags(ios::left) << setfill('%') << setw(2) << "%" << endl;
	cout << setiosflags(ios::left) << setfill('%') << setw(3) << "%" << endl;
	cout << setiosflags(ios::left) << setfill('%') << setw(2) << "%" << endl;
	cout << setiosflags(ios::left) << setfill('%') << setw(1) << "%" << endl;

	cout << setiosflags(ios::left) << setfill('%') << setw(1) << "%" << endl;
	cout << setiosflags(ios::left) << setfill('%') << setw(2) << "%" << endl;
	cout << setiosflags(ios::left) << setfill('%') << setw(3) << "%" << endl;
	cout << setiosflags(ios::left) << setfill('%') << setw(4) << "%" << endl;
	cout << setiosflags(ios::left) << setfill('%') << setw(5) << "%" << endl;
 
	cout << setiosflags(ios::right) << setw(10) << "%%%%%%%%%%" << endl;
	cout << setiosflags(ios::right) << setw(9) <<   "%%%%%%%%" << endl;
	cout << setiosflags(ios::right) << setw(8) <<    "%%%%%%" << endl;
	cout << setiosflags(ios::right) << setw(7) <<     "%%%%" << endl;
	cout << setiosflags(ios::right) << setw(4) <<      "%%" << endl;
	return 0;
}