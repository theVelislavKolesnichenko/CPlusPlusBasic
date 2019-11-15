#include <iostream>
using namespace std;
void age(int a);
int main() {
	int a;
	cout << "Age=";
	cin >> a;
	age(a);
}
void age(int a) {
	switch (a) {
		case 0: cout << "Their age period is:" << "Baby"; break;
		case 1: cout << "Their age period is:" <<"Toddler" ; break;
		case 2: cout << "Their age period is:" << "Toddler"; break;
		case 3: cout << "Their age period is:" << "Preschooler"; break;
		case 4: cout << "Their age period is:" << "Preschooler"; break;
		case 5: cout << "Their age period is:" << "Gradeschooler"; break;
		case 6: cout << "Their age period is:" << "Gradeschooler"; break;
		case 7: cout << "Their age period is:" << "Gradeschooler"; break;
		case 8: cout << "Their age period is:" << "Gradeschooler"; break;
		case 9: cout << "Their age period is:" << "Gradeschooler"; break;
		case 10: cout << "Their age period is:" << "Gradeschooler"; break;
		case 11: cout << "Their age period is:" << "Gradeschooler"; break;
		case 12: cout << "Their age period is:" << "Gradeschooler"; break;
		case 13: cout << "Their age period is:" << "Teen"; break;
		case 14: cout << "Their age period is:" << "Teen"; break;
		case 15: cout << "Their age period is:" << "Teen"; break;
		case 16: cout << "Their age period is:" << "Teen"; break;
		case 17: cout << "Their age period is:" << "Teen"; break;
		case 18: cout << "Their age period is:" << "Teen"; break;
		case 19: cout << "Their age period is:" << "Young Adult"; break;
		case 20: cout << "Their age period is:" << "Young Adult"; break;
		case 21: cout << "Their age period is:" << "Young Adult"; break;
		
		default: cout << "wrong input";
	}
}