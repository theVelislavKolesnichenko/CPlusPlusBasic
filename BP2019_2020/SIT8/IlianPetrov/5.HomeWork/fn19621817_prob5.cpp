#include <iostream>
using namespace std;
double Y();

int main() {
	cout << Y()<<endl;
	return 0;
}
double Y()
{
	int a;
	int b = 0;
	for(i=0; i<10; i++)
	{
		cout << "a= ";
		cin >> a;
		b = b + a;
	}
	return b / 10;
}