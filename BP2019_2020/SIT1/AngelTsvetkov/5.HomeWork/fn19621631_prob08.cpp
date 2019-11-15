#include <iostream>
using namespace std;
void funkciq(double &a);
int main()
{
	double a = 0;
	cout <<"Predi funkciqta : "<< a << endl;
	cout << "Sled funkciqta : ";
	funkciq(a);
	return 0;
}
void funkciq(double &a)
{
	
	cout << &a << endl;
}