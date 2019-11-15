#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	cout<<"a)"<<setw(6)<<"%%%%%"<<setw(5)<<"b)"<<setw(4)<<"%"<<setw(8)<<"c)"<<setw(4)<<"%"<<setw(8)<<"d)"<<setw(12)<<"%%%%%%%%%%"<<endl;
	cout<<setw(7)<<"%%%%"<<setw(11)<<"%%"<<setw(12)<<"%%"<<setw(18)<<"%%%%%%%%"<<endl;
	cout<<setw(6)<<"%%%"<<setw(13)<<"%%%"<<setw(12)<<"%%%"<<setw(16)<<"%%%%%%"<<endl;
	cout<<setw(5)<<"%%"<<setw(13)<<"%%"<<setw(14)<<"%%%%"<<setw(14)<<"%%%%"<<endl;
	cout<<setw(4)<<"%"<<setw(13)<<"%"<<setw(16)<<"%%%%%"<<setw(12)<<"%%"<<endl;
	return 0;
}
