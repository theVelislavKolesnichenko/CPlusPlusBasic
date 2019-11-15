#include <iostream>
using namespace std;
void func(int mesec);
int main()
{
	int nomer;
	cout << "izberete nomer na mesec=";
	cin >> nomer;
	cout << "sezonut e ";
	func(nomer);
	return 0;
}
void func(int mesec)
{
	if (mesec == 1 || mesec == 2 || mesec == 12)
		cout << "zima" << endl;
	else if (mesec >= 3 && mesec <= 5)      // moje da bude i mesec==3 i mesec==4 i mesec ==5 reshih da go napisha taka za raznoobrazie 
		cout << "prolet" << endl;
	else if (mesec == 6 || mesec == 7 || mesec == 8)
		cout << "lqto" << endl;
	else if (mesec == 9 || mesec == 10 || mesec == 11)
		cout << "esen" << endl;
	else cout << endl << mesec << " e nevaliden mesec!";
}