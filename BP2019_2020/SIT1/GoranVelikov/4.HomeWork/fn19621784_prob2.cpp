#include <iostream>
#include <cmath>
using namespace std;
int funct(int a)
{
	//if (a >= 3 && a < 6) { cout << "Пролет"; }
	//else if (a >= 6 && a < 9) { cout << "Лято"; }
	//else if (a >= 9 && a < 12) { cout << "Есен"; }//много мазна задача, сега трябва да ползвам switch
	switch (a) 
	{
	case 3: {cout << "Spring";break;}
	case 4: {cout << "Spring";break;}
	case 5: {cout << "Spring";break;}
	case 6: {cout << "Summer";break;}
	case 7: {cout << "Summer";break;}
	case 8: {cout << "Summer";break;}
	case 9: {cout << "Fall";break;}
	case 10: {cout << "Fall";break;}
	case 11: {cout << "Fall";break;}
	case 12: {cout << "Winter";break;}
	case 1: {cout << "Winter";break;}
	case 2: {cout << "Winter";break;}
	default: {cout << "This is not a month";break;}
	}
	return 0;

}
int main()
{
	int a;
	cin >> a;
	cout << funct(a);
	return 0;
}