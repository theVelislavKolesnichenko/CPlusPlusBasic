#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	cout << "a)" << right << setw(7) << "%%%%%" << setw(5) << "b)" << setiosflags(ios::right) << setw(3) << "%" << setw(8) << "c)" << setiosflags(ios::right) << setw(3) << "%" << setw(10) << "d)" << setiosflags(ios::right) << setw(13) << "%%%%%%%%%%" << endl;
	cout << right << setw(8) << "%%%%" << setiosflags(ios::right) << setw(10) << "%%" << setiosflags(ios::right) << setw(11) << "%%" << setiosflags(ios::right) << setw(21) << "%%%%%%%%" << endl;
	cout << right << setw(7) << "%%%" << setiosflags(ios::right) << setw(12) << "%%%" << setiosflags(ios::right) << setw(11) << "%%%" << setiosflags(ios::right) << setw(19) << "%%%%%%" << endl;
	cout << right << setw(6) << "%%" << setiosflags(ios::right) << setw(12) << "%%" << setiosflags(ios::right) << setw(13) << "%%%%" << setiosflags(ios::right) << setw(17) << "%%%%" << endl;
	cout << right << setw(5) << "%" << setiosflags(ios::right) << setw(12) << "%" << setiosflags(ios::right) << setw(15) << "%%%%%" << setiosflags(ios::right) << setw(15) << "%%";
	return 0;
}