#include <iostream>
using namespace std;

int season(int a);

int main()
{
	int a;
	cout << "Vavedi nomer na mesets" << endl;
	cout << "a=";
	cin >> a;
	cout << "Sezonat e"<<endl;
	season(a);
	return 0;
}

int season(int a)
{

		switch (a)
		{
		case 1:
		case 2:
		case 12:

			cout << "Zima";

			break;
		case 3:
		case 4:
		case 5:
			cout << "Prolet";
			break;
		case 6:
		case 7:
		case 8:
			cout << "Lqto";
			break;
		case 9:
		case 10:
		case 11:
			cout << "Esen";
			break;
		default:
			cout << "Chisloto ne saotvetstva na mesets";
		}
	
	return 0;
}
