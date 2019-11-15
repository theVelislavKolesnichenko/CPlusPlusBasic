#include <iostream>
using namespace std;
void Sum(int a, int b, int(*sum));
 
int main()
{
	int a, b, * sum;
	cout << "a= ";
	cin >> a;
	do {
		cout << "b= ";
		cin >> b;
	} while (a > b);
	
	cout << sum;
	Sum(a, b, (*sum));
	cout << sum;
	return 0;
}
void Sum(int a, int b, int(*sum))
{
	(*sum) = a + b;
}