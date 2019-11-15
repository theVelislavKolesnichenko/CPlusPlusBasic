#include <iostream>
using namespace std;
int dali(int n)
{

	int brp = 0, bro = 0, i = 0;
	for (i = 0; i < 10; i++)
	{
		cout << "Vyvedete chislo:\n";
		cin >> n;
		if (n > 0)
		{
			brp++;
		}
		else if (n < 0)
		{
			bro++;
		}
	}
	cout << "broqt na poloshitelnite chisla e:" << brp << endl;
	cout << "Broqt na otricatelnite chisla e:" << bro << endl;
	return 0;
}

int main()
{
	int result,b=0;
	
	result = dali(b);
	cout << result << endl;
	return 0;
}

