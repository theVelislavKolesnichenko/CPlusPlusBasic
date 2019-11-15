#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	cout << left;
	cout << setw(6) << "Rank" << setw(20) << "Gymnast" << setw(10) << "Nation" << setw(8) << "Ribbon" << setw(8) << "Ball" << setw(8) << "Batons" << setw(8) << "Hoop" << setw(8) << "Total" << endl;
	cout << setw(6) << "1" << setw(20) << "Dina Averina" << setw(10) << "Russia" << setw(8) << "21.650" << setw(8) << "22.950" << setw(8) << "23.000" << setw(8) << "23.800" << setw(8) << "91.400" << endl;
	cout << setw(6) << "2" << setw(20) << "Arina Averina" << setw(10) << "Russia" << setw(8) << "20.850" << setw(8) << "23.100" << setw(8) << "24.050" << setw(8) << "23.100" << setw(8) << "91.100" << endl;
	cout << setw(6) << "3" << setw(20) << "Linoy Ashram" << setw(10) << "Israel" << setw(8) << "21.050" << setw(8) << "23.100" << setw(8) << "23.500" << setw(8) << "22.050" << setw(8) << "89.700" << endl;
	cout << setw(6) << "4" << setw(20) << "Boryana Kaleyn" << setw(10) << "Bulgaria" << setw(8) << "19.900" << setw(8) << "22.400" << setw(8) << "22.350" << setw(8) << "21.625" << setw(8) << "86.275" << endl;
	cout << setw(6) << "5" << setw(20) << "Vlada Nikolchenko" << setw(10) << "Ukraine" << setw(8) << "19.450" << setw(8) << "22.250" << setw(8) << "19.500" << setw(8) << "22.950" << setw(8) << "84.150" << endl;

	return 0;
}

/*
Rank  Gymnast             Nation    Ribbon  Ball    Batons  Hoop    Total
1     Dina Averina        Russia    21.650  22.950  23.000  23.800  91.400
2     Arina Averina       Russia    20.850  23.100  24.050  23.100  91.100
3     Linoy Ashram        Israel    21.050  23.100  23.500  22.050  89.700
4     Boryana Kaleyn      Bulgaria  19.900  22.400  22.350  21.625  86.275
5     Vlada Nikolchenko   Ukraine   19.450  22.250  19.500  22.950  84.150 
*/