#include <iostream>
using namespace std;
int nod(int a, int b);
int nok(int a, int b);
int main()
{
	int a, b;
	cout << "a = ";
	cin >> a;
	cout << "b = ";
	cin >> b;
	cout << "Nai-golqm obsht delitel = " << nod(a, b)<<endl;
	cout << "Nai-malko obshto kratno = " << nok(a, b) << endl;

	return 0;
}
int nod(int a, int b)
{
	int result;
	if (a == 0)
	{
		return b;
	}
	else if(b==0)
	{
		return a;
	}
	else if ((a > b)&&(a!=0)&&(b!=0))
	{
		result = a%b;
		if (result == 0)
		{
			return b;
		}
		else {
			return result;
		}
	}
	else if ((b > a) && (a != 0) && (b != 0))
	{
		result = b%a;
		if (result == 0)
		{
			return a;
		}
		else {
			return result;
		}
	}
}
int nok(int a, int b)
{
	int result;
	if (a > b)
	{
		result = (a*b) / nod(a,b);
		return result;
	}
	else if(b>a) {
		result = (a*b) / nod(a,b);
		return result;
	}
}
