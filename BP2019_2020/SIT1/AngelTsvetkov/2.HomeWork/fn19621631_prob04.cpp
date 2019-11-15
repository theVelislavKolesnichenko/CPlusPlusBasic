#include <iostream>
using namespace std;
int stot(int n);
int des(int n);
int ed(int n);
int main()
{
	int n=837;
	int st = stot(n);
	cout <<"Hundreds: " << st << endl;
	int ds = des(n);
	cout << "Tens: " << ds << endl;
	int edn = ed(n);
	cout << "Units: " << edn << endl;
	return 0;
}
int stot(int n)
{
	int result;
	result = (n / 100) % 10;
	return result;
}
int des(int n)
{
	int result;
	result = (n/10) % 10;
	return result;
}
int ed(int n)
{
	int result;
	result = n % 10;
	return result;
}


