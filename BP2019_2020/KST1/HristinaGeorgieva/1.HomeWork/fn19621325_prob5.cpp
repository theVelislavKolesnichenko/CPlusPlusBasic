#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	cout << setiosflags(ios::left) << setfill('&') << setw(5) << "&" << endl;
	cout << setiosflags(ios::left) << setfill('&') << setw(4) << "&" << endl;
	cout << setiosflags(ios::left) << setfill('&') << setw(3) << "&" << endl;
	cout << setiosflags(ios::left) << setfill('&') << setw(2) << "&" << endl;
	cout << setiosflags(ios::left) << setfill('&') << setw(1) << "&" << endl;

	cout << setiosflags(ios::left) << setfill('&') << setw(1) << "\n&" << endl;
	cout << setiosflags(ios::left) << setfill('&') << setw(2) << "&" << endl;
	cout << setiosflags(ios::left) << setfill('&') << setw(3) << "&" << endl;
	cout << setiosflags(ios::left) << setfill('&') << setw(2) << "&" << endl;
	cout << setiosflags(ios::left) << setfill('&') << setw(1) << "&" << endl;

	cout << setiosflags(ios::left) << setfill('&') << setw(1) << "\n&" << endl;
	cout << setiosflags(ios::left) << setfill('&') << setw(2) << "&" << endl;
	cout << setiosflags(ios::left) << setfill('&') << setw(3) << "&" << endl;
	cout << setiosflags(ios::left) << setfill('&') << setw(4) << "&" << endl;
	cout << setiosflags(ios::left) << setfill('&') << setw(5) << "&" << endl;

	cout << setiosflags(ios::right) << setfill('&') << setw(10) << "\n &&&&&&&&&&" << endl;
	cout << setiosflags(ios::right) << setfill('&') << setw(9) << "  &&&&&&&& " << endl;
	cout << setiosflags(ios::right) << setfill('&') << setw(8) << "   &&&&&&  " << endl;
	cout << setiosflags(ios::right) << setfill('&') << setw(7) << "    &&&&   " << endl;
	cout << setiosflags(ios::right) << setfill('&') << setw(4) << "     &&    " << endl;
	system("pause");
	return 0;

}