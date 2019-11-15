#include <iostream>
using namespace std;
int Count(int a);

int main() {
	int a;
	cout << "a= ";
	cin >> a;
	cout << "Digits: "<< Count(a) << endl;
	return 0;
}
int Count(int a)
{
	int b = 1;
	while (a / 10 > 0) 
	{
		b++;
		a = a / 10;
	}
	return b; 

}