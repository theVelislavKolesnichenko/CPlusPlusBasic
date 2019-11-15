#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	cout.setf(ios::left);
	cout << setw(5) << "Rank" << setw(20) << "Gymnast" << setw(9)<< "Nation" << setw(9) << "Ribbon" << setw(8) << "Ball" << setw(8) << "Batons" << setw(8) << "Hoop" << setw(8) << "Total" << endl;
	cout << setw(5) << "1" << setw(20) << "Dina Averina" << setw(9) << "Russia" << setw(9) << "21.650" << setw(8) << "22.950" << setw(8) << "23.000" << setw(8) << "23.800" << setw(8) << "91.400" << endl;
	cout << setw(5) << "2" << setw(20) << "Arina Averina" << setw(9) << "Russia" << setw(9) << "20.850" << setw(8) << "23.100" << setw(8) << "24.050" << setw(8) << "23.100" << setw(8) << "91.100" << endl;
	cout << setw(5) << "3" << setw(20) << "Linoy Ashram" << setw(9) << "Israel" << setw(9) << "21.050" << setw(8) << "23.100" << setw(8) << "23.500" << setw(8) << "22.050" << setw(8) << "89.700" << endl;
	cout << setw(5) << "4" << setw(20) << "Boryana Kaleyn" << setw(9) << "Bulgaria" << setw(9) << "19.900" << setw(8) << "22.400" << setw(8) << "22.350" << setw(8) << "21.625" << setw(8) << "86.275" << endl;
	cout << setw(5) << "5" << setw(20) << "Vlada Nikolchenko" << setw(9) << "Ukraine" << setw(9) << "19.450" << setw(8) << "22.250" << setw(8) << "19.500" << setw(8) << "22.950" << setw(8) << "84.150" << endl;
	return 0;
}