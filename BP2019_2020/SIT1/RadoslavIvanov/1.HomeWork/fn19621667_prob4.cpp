#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	cout << "Rank" << setw(9) << "Gymnast" << setw(18) << "Nation" << setw(10) << "Ribbon" << setw(7) << "Ball" << setw(12) << "Batons" << setw(7) << "Hoop" << setw(10) << "Total" << endl;
	cout << showpoint << setprecision(5);
	cout << 1 << setw(17) << "Dina Averina" << setw(13) << "Russia" << setw(10) << 21.650 << setw(9) << 22.950 << setw(10) << 23.000 << setw(9) << 23.800 << setw(9) << 91.400 << endl;
	cout << 2 << setw(18) << "Arina Averina" << setw(12) << "Russia" << setw(10) << 20.850 << setw(9) << 23.100 << setw(10) << 24.050 << setw(9) << 23.100 << setw(9) << 91.100 << endl;
	cout << 3 << setw(17) << "Linoy Ashram" << setw(13) << "Israel" << setw(10) << 21.050 << setw(9) << 23.100 << setw(10) << 23.500 << setw(9) << 22.050 << setw(9) << 89.700 << endl;
	cout << 4 << setw(19) << "Boryana Kaleyn" << setw(13) << "Bulgaria" << setw(8) << 19.900 << setw(9) << 22.400 << setw(10) << 22.350 << setw(9) << 21.625 << setw(9) << 86.275 << endl;
	cout << 5 << setw(22) << "Vlada Nikolchenko" << setw(9) << "Ukraine" << setw(9) << 19.450 << setw(9) << 22.250 << setw(10) << 19.500 << setw(9) << 22.950 << setw(9) << 84.150 << endl;
	return 0;
}
