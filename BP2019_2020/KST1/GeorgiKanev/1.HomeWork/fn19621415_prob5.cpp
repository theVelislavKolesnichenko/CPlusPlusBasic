#include <iostream>
#include <iomanip>
using namespace std;


int main() {
	cout << setfill('%');
	cout << setw(5) << '%' << endl;
	cout << setw(4) << '%' << endl;
	cout << setw(3) << '%' << endl;
	cout << setw(2) << '%' << endl;
	cout << setw(1) << '%' << endl;

	cout << endl << setw(1) << '%' << endl;
	cout << setw(2) << '%' << endl;
	cout << setw(3) << '%' << endl;
	cout << setw(2) << '%' << endl;
	cout << setw(1) << '%' << endl;

	cout << endl << setw(1) << '%' << endl;
	cout << setw(2) << '%' << endl;
	cout << setw(3) << '%' << endl;
	cout << setw(4) << '%' << endl;
	cout << setw(5) << '%' << endl;

	cout << endl << setw(10) << '%' << endl;
	cout <<" "<< setw(8)<< '%' << endl;
	cout <<"  "<< setw(6) << '%' << endl;
	cout <<"   "<< setw(4) << '%' << endl;
	cout <<"    "<< setw(2) << '%' << endl;

	return 0;
}