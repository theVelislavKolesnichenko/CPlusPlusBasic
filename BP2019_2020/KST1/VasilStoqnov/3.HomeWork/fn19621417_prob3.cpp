#include <iostream>
using namespace std;
void func(double num)
{
	if (num > 0)cout << "positive";
	else if (num<0)
	{
		cout << "negative";
	}
}

int main()
{
	double inputnum;
	cout << "vuvedete chislo";
	cin >> inputnum;
	func(inputnum);      

}

