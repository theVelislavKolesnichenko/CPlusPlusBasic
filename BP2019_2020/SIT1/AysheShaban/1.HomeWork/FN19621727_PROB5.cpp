#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	cout << "a)" << setw(6) << "b)" << setw(5)<<"c)"<<setw(6)<<"d)"<< endl;
	cout << setw(6) << setfill('%') << " " << setw(5) << setfill('%') << "    " << setw(6) << setfill('%') << "     " << setw(11)<<setfill('%')<<" "<<endl;
	cout << setw(6) << setfill('%') << "  " <<setw(5)<<setfill('%')<<"   "<<setw(6)<<setfill('%')<<"    "<<setw(1)<<" "<<setw(9)<<setfill('%')<<" "<< endl;
	cout << setw(6) << setfill('%') << "   " <<setw(5)<<setfill('%')<<"  "<<setw(6)<<setfill('%')<<"   "<<setw(2)<<"  "<<setw(8)<<setfill('%')<<"  "<< endl;
	cout << setw(6) << setfill('%') << "    " << setw(5) << setfill('%')<<"   "<<setw(6)<<setfill('%')<<"  "<<setw(3)<<"   "<<setw(7)<<setfill('%')<<"   "<< endl;
	cout << setw(6) << setfill('%') << "     " <<setw(5)<<setfill('%')<<"    "<<setw(6)<<setfill('%')<<" "<<setw(4)<<"    "<<setw(6)<<setfill('%')<<"    "<< endl;

	



	return 0;
}

