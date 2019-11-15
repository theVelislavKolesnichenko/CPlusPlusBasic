#include <iostream>
using namespace std;
void month(int a);
int main() {
	int a;
	cout << "Number of the month=";
	cin >> a;
	month(a);

}
void month(int a) {
	if (a < 1 || a>12) {
		cout << "Not a valid month";
	}
	else {
		switch (a) {
		case 1 :cout << "Its a month in winter"; break;
		case 2:cout << "Its a month in winter"; break;
		case 3:cout << "Its a month in spring"; break;
		case 4:cout << "Its a month in spring"; break;
		case 5:cout << "Its a month in spring"; break;
		case 6:cout << "Its a month in summer"; break;
		case 7:cout << "Its a month in summer"; break;
		case 8:cout << "Its a month in summer"; break;
		case 9:cout << "Its a month in autumn"; break;
		case 10:cout << "Its a month in autumn"; break;
		case 11:cout << "Its a month in autumn"; break;
		case 12:cout << "Its a month in winter"; break;
		}
	}
}
