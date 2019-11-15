#include <iostream>
#include<conio.h>

using namespace std;

void start()
{
	cout << endl << "Start ?" << endl;
}

void final()
{
	cout << endl << "final !" << endl;
}

int main()
{
	char s;
	cout << "Press any key to start the program" << endl;
	s = _getch();
	start();

	cout << endl << "Press any key to end the program" << endl;
	char f;
	f = _getch();
	final();
	system("pause");
	return 0;
}