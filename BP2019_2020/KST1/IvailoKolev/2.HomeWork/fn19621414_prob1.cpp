#include<iostream>
#include<conio.h>
#include<stdio.h>

using namespace std;
void start()
{
	cout << "Start?";
}
void final()
{
	cout << "Final!";
}
int main()
{
	start();
	cout << endl;
	cout << "Press any key to continue ";
	_getch();
	cout << endl;
	final();
	return 0;
}