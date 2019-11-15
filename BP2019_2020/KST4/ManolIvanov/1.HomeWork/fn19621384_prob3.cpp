#include <iostream>
using namespace std;
int main()
{
	int ch;
	cout << "vuvedi chisloto" << endl;
	cin >> ch;
	int a = ch % 10;
	int b = (ch / 10) % 10;
	int c = ch / 100;
	cout << "Units " << a << " Tens " << b << " Hundreds " << c << endl;
	return 0;
}