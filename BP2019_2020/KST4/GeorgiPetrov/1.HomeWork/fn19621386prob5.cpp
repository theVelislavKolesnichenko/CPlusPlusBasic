#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	cout << "a" << setw(10) << "b" << setw(10) << "c" << setw(10) << "d" << endl;
	cout << "%%%%%" << setw(6) << "%" << setw(10) << "%" << endl;
	cout << "%%%%" << setw(8) << "%%" << setw(10) << "%%" << endl;
	cout << "%%%" << setw(10) << "%%%" << setw(10) << "%%%" << endl;
	cout << "%%" << setw(10) << "%%" << setw(10) << "%%%%" << endl;
	cout << "%" << setw(10) << "%" << setw(14) << "%%%%%" << endl;
	return 0;
}