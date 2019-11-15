#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	cout << "%%%%%" << setw(5) << "%" << setw(8) << "%" << setw(16) << "%%%%%%%%%%" << endl;
	cout << "%%%%" << setw(7) << "%%" << setw(8) << "%%" << setw(14) << "%%%%%%%%" << endl;
	cout << "%%%" << setw(9) << "%%%" << setw(8) << "%%%" << setw(12) << "%%%%%%" << endl;
	cout << "%%" << setw(9) << "%%" << setw(10) << "%%%%" << setw(10) << "%%%%" << endl;
	cout << "%" << setw(9) << "%" << setw(12) << "%%%%%" << setw(8) << "%%" << endl;
	return 0;
}