#include <iostream>
using namespace std;
void start()
{
	cout << "start";
}
void final()
{
	cout << "final" << endl;
}
int main()
{
	start();
	cout << endl << "Natisnete klavish za da produljite";
	cin.ignore();
	cin.get();
	final();
}