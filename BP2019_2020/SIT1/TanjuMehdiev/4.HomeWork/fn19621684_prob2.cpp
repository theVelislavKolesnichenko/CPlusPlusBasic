#include <iostream>
#include <string>
using namespace std;
char sezon(int a);
int main()
{
	int a;
	cout << "vyvedede nomera na meseca:";
	cin >> a;
	cout << sezon(a)<<endl;
	return 0;
}
char sezon(int a)
{
	if (a >= 3 && a <= 6)
	{
		cout << "Prolet";
		return 0;
	}
	else if (a >= 7 && a <= 10)
	{
		cout << "Lqto";
		return 0;
	}
	else if (a >= 11 && a <= 12 )
	{
		cout << "Zima";
		return 0;
	}
	else if (a >= 1 && a <= 2)
	{
		cout << "Zima";
		return 0;
	}
	else if(a<1||a>12)
	{
		cout << "tova ne e mesec";
		return 0;
	}


}