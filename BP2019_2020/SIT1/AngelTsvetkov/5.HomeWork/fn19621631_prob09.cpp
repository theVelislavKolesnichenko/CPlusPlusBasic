#include <iostream>
using namespace std;
void funkciq(int &mul);
int main()
{
	int a, b;
	cin >> a;
	cin >> b;
	int mul=a*b;
	if (b > a){
		cout << &mul << endl;
		funkciq(mul);
	}
	else {}
	return 0;
}
void funkciq(int &mul)
{
	int mul1 = mul;
	cout << &mul1 << endl;
}