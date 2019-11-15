#include <iostream>
#include <locale>
using namespace std;

int main()
{
    int a, b;
	float c, d;
	cout << "Въведете a=" << endl;
	cin >> a;
	cout << "Въведете b=" << endl;
	cin >> b;
	c = a / b;
	d = (float)a / b;
	cout << "c=" << c << endl; //Резултатът ще е int, когато се разделят два интиджъра,  защото float е зададен само на c, а не както на d да се конвертира int a във float.
	cout << "d=" << d; //Резултатът може да бъде с плаваша запетая, когато се разделя float на int
return 0;
}