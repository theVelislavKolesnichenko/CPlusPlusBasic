#include <iostream>
using namespace std;

int chislo(int a);

int main()
{
	int a;
	a = 0;
    a=chislo(a);
	return 0;

}

int chislo(int a)
{
	do
	{
		cout << "Vavedi chilso" << endl;
		cout << "a=";
		cin >> a;
		if (((a>999)&&(a<10000))||((a<-999)&&(a>-10000)))
		{
			cout << "four-digit"<<endl;
		}
		else if((a<=999)&&(a>=-999))
		{
			cout << "less four-digit"<<endl;
		}
		else
		{
			cout << "more four-digit"<<endl;
		}
	} while (a != 0);
	return 0;
}