#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	char a = 5;
	char b = 7;
	char c = 6;
	cout << "Units" << setw(2) << c << "Tens" << setw(2) << b << setw(2) << "Hundreds" << setw(2) << a << endl;
		
	return 0;
}