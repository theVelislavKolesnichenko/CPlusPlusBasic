#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	cout<<"a)"<<endl;
	cout<<setw(5)<<setfill('%')<<""<<endl;
	cout<<setw(4)<<setfill('%')<<""<<endl;
	cout<<setw(3)<<setfill('%')<<""<<endl;
	cout<<setw(2)<<setfill('%')<<""<<endl;
	cout<<setw(1)<<setfill('%')<<""<<endl;
	cout<<"b)"<<endl;
	cout<<setw(1)<<setfill('%')<<""<<endl;
	cout<<setw(2)<<setfill('%')<<""<<endl;
	cout<<setw(3)<<setfill('%')<<""<<endl;
	cout<<setw(2)<<setfill('%')<<""<<endl;
	cout<<setw(1)<<setfill('%')<<""<<endl;
	cout<<"c)"<<endl;
	cout<<setw(1)<<setfill('%')<<""<<endl;
	cout<<setw(2)<<setfill('%')<<""<<endl;
	cout<<setw(3)<<setfill('%')<<""<<endl;
	cout<<setw(4)<<setfill('%')<<""<<endl;
	cout<<setw(5)<<setfill('%')<<""<<endl;
	cout<<"d)"<<endl;
	cout<<setw(10)<<setfill('%')<<""<<endl;
	cout<<ends<<setw(8)<<setfill('%')<<""<<endl;
	cout<<ends<<ends<<setw(6)<<setfill('%')<<""<<endl;
	cout<<ends<<ends<<ends<<setw(4)<<setfill('%')<<""<<endl;
	cout<<ends<<ends<<ends<<ends<<setw(2)<<setfill('%')<<""<<endl;

	return 0;
}
