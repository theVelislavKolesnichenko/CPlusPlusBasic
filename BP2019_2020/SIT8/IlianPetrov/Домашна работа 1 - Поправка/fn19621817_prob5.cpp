#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	cout <<"a)"<<setw(6)<<"b)"<<setw(6)<<"c)"<<setw(6)<<"d)"<< endl;
	cout << setw(6)<<setfill('%')<<" "<<setw(5)<<setfill('%')<<"    "<<setw(6)<<setfill('%')<<"     "<<setw(11)<<setfill('%')<<" "<<endl;
	cout << setw(6)<<setfill('%')<<"  "<<setw(5)<<setfill('%')<<"   "<<setw(6)<<setfill('%')<<"    "<<" "<<setw(9)<<setfill('%')<<" "<<endl;
	cout << setw(6)<<setfill('%')<<"   "<<setw(5)<<setfill('%')<<"  "<<setw(6)<<setfill('%')<<"   "<<"  "<<setw(7)<<setfill('%')<<" "<<endl;
	cout << setw(6)<<setfill('%')<<"    "<<setw(5)<<setfill('%')<<"   "<<setw(6)<<setfill('%')<<"  "<<"   "<<setw(5)<<setfill('%')<<" "<<endl;
	cout << setw(6)<<setfill('%')<<"     "<<setw(5)<<setfill('%')<<"    "<<setw(6)<<setfill('%')<<" "<<"    "<<setw(3)<<setfill('%')<<" "<<endl;
	return 0;
}