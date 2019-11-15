#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	cout << "a)" << setw(7) << "%%%%%" << setw(10) << "b)" << setw(3) << "%" <<setw(15)<<"c)"<<setw(3)<<"%"<<setw(15)<<"d)"<<setw(12)<<"%%%%%%%%%%"<< endl;
	cout << setw(8) << "%%%%" << setw(15) << "%%" <<setw(18)<<"%%"<<setw(25)<<"%%%%%%%%"<< endl;
	cout << setw(7) << "%%%" << setw(17)<<"%%%"<<setw(18)<<"%%%"<<setw(23)<<"%%%%%%"<<endl;
	cout << setw(6) << "%%" <<setw(17)<<"%%"<<setw(20)<<"%%%%"<<setw(21)<<"%%%%"<< endl;
	cout << setw(5) << "%" <<setw(17)<<"%"<<setw(22)<<"%%%%%"<<setw(19)<<"%%"<< endl;


	return 0;
}