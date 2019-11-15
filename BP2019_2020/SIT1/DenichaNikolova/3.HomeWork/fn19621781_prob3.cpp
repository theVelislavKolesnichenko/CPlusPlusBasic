#include <iostream>
using namespace std;

void positive_negative(float a);

int main()
{
	positive_negative(6);
	positive_negative(-100);

	//system("pause");
	return 0;
}

void positive_negative(float a)
{
	if (a > 0)
	{
		cout << "positive"<<endl;
	}
	if (a < 0)
	{
		cout << "negative"<<endl;
	}
}