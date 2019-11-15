#include <iostream>
using namespace std;
void start()
{
	cout << "start" << endl;
}
void final()
{
	cout << "final" << endl;
}
int main()
{
	start();
	cout << "vuvedete proizvolen klavish"<<endl;
	cin.ignore();
	cin.get();
	final();
}