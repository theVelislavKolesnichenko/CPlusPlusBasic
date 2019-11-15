#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	cout<<showpoint<<setprecision(3);
	cout<<"Rank"<<setw(10)<<"Gymnast"<<setw(10)<<"Nation"<<setw(10)<<"Ribbon"<<setw(8)<<"Ball"<<setw(13)<<"Batoons"<<setw(7)<<"Hoop"<<setw(12)<<"Total"<<endl;
	cout<<"1"<<setw(15)<<"Dina Averina"<<setw(8)<<"Russia"<<setw(10)<<"21.650"<<setw(10)<<"22.950"<<setw(10)<<"23.000"<<setw(10)<<"23.800"<<setw(10)<<"91.400"<<endl;
	cout<<"2"<<setw(15)<<"Arina Averina"<<setw(8)<<"Russia"<<setw(10)<<"20.850"<<setw(10)<<"23.100"<<setw(10)<<"24.050"<<setw(10)<<"23.100"<<setw(10)<<"91.100"<<endl;
	cout<<"3"<<setw(15)<<"Linoy Ashram"<<setw(8)<<"Israel"<<setw(10)<<"21.050"<<setw(10)<<"23.100"<<setw(10)<<"23.500"<<setw(10)<<"22.050"<<setw(10)<<"89.700"<<endl;
	cout<<"4"<<setw(15)<<"Boryana Kaleyn"<<setw(9)<<"Bulgaria"<<setw(9)<<"19.900"<<setw(10)<<"22.400"<<setw(10)<<"22.350"<<setw(10)<<"21.625"<<setw(10)<<"86.275"<<endl;
	cout<<"5"<<setw(17)<<"Vlada Nikolchenko"<<setw(8)<<"Ukraine"<<setw(8)<<"19.450"<<setw(10)<<"22.250"<<setw(10)<<"19.500"<<setw(10)<<"22.950"<<setw(10)<<"84.150"<<endl;

	return 0;
}