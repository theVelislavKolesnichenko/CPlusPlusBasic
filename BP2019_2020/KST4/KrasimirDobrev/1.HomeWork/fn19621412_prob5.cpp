#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	cout << "а)" << setw(10) << "b)" << setw(10) << "c)" << setw(10) << "d)"<< endl;
	cout << "%%%%%" << setw(6) << "%" << setw(10) << "%" <<setw(20)<<"%%%%%%%%%%"<< endl;
	cout << "%%%%" << setw(8) << "%%" << setw(10) << "%%" << setw(18) << "%%%%%%%%" << endl;
	cout << "%%%" << setw(10) << "%%%" << setw(10) << "%%%" << setw(16) << "%%%%%%" << endl;
	cout << "%%" << setw(10) << "%%" << setw(12) << "%%%%" << setw(14) << "%%%%" << endl;
	cout << "%" << setw(10) << "%" << setw(14) << "%%%%%" << setw(12) << "%%" << endl;
	return 0;
}