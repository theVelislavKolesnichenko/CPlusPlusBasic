#include<iostream>
using namespace std;
void start()
{
	cout << "start";
}
void final()
{
	cout << endl << "final";
}
int main()
{
	start();
	cout << endl << "Press any key to continue.";
	cin.ignore();
	cin.get();
	final();
}