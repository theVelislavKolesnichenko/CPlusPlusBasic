#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	cout << setw(5) <<left<<"Rank" 
		<< setw(19)<< "Gymnast"
		<< setw(10) << "Nation"
		<< setw(10) << "Ribbon"
		<< setw(10) << "Ball"
		<< setw(10) << "Batons"
		<< setw(10) << "Hoop"
		<< setw(10) << "Total"
		<< endl;
	cout << setw(5) <<left<< "1" 
		<< setw(19)  << "Dina Averina"
		<< setw(10) << "Russia"
		<< setw(10) << "21.650"
		<< setw(10) << "22.950"
		<< setw(10) << "23.000"
		<< setw(10) << "23.800"
		<< setw(10) << "91.400"
		<< endl;
	cout << setw(5) <<left<< "2" 
		<< setw(19)  << "Arina Averina"
		<< setw(10) << "Russia"
		<< setw(10) << "20.850"
		<< setw(10) << "23.100"
		<< setw(10) << "24.050"
		<< setw(10) << "23.100"
		<< setw(10) << "91.100 "
		<< endl;
	cout<<setw(5) <<left<<"3"
		<<setw(19)<<"Linoy Ashram"
		<< setw(10) << "Israel"
		<< setw(10) << "21.050"
		<< setw(10) << "23.100"
		<< setw(10) << "23.500"
		<< setw(10) << "22.050"
		<< setw(10) << "89.700"
		<< endl;
	cout<< setw(5) <<left<<"4"
		<< setw(19)<<"Boryana Kaleyn"
		<< setw(10) << "Bulgaria"
		<< setw(10) << "19.900"
		<< setw(10) << "22.400"
		<< setw(10) << "22.350"
		<< setw(10) << "21.625"
		<< setw(10) << "86.275"
		<< endl;
	cout<<setw(5) <<left<<"5"
		<< setw(19)<<"Vlada Nikolchenko"
		<< setw(10) << "Ukraine"
		<< setw(10) << "19.450"
		<< setw(10) << "22.250"
		<< setw(10) << "19.500"
		<< setw(10) << "22.950"
		<< setw(10) << "84.150"
		<< endl;
	return 0;
}