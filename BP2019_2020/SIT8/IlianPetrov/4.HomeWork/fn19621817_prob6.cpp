#include <iostream>
#include <iomanip>
using namespace std;
char X();

int main()
{

	cout << X();
}
char X()
{
	cout << "a)" << setw(6) << "b)" << setw(6) << "c)" << endl;
	cout << setw(6) << setfill('%') <<" " << setw(4) << setfill('%')<<"   "<< setw(11)<<setfill('%') <<" "<<endl;
	cout << setw(6) << setfill('%') <<"  " << setw(4) << setfill('%')<<"  " <<" "<<setw(9)<<setfill('%') <<" "<< endl;
	cout << setw(6) << setfill('%') <<"   " << setw(4)<< setfill('%')<<" " << "  " << setw(7) << setfill('%') << " " <<endl;
	cout << setw(6) << setfill('%') <<"    " << setw(4) << setfill('%')<<"  " << "   " << setw(5) << setfill('%') << " " << endl;
	cout << setw(6) << setfill('%') << "     " <<setw(4) << setfill('%')<<"   " << "    " << setw(3) << setfill('%') << " " << endl;


	return 0;
}