#include <iostream>
using namespace std;
void func();
int main()
{
	func();
	return 0;
}
void func()
{
	int n1, n2, max;
	cout << "vuvedete 2 chisla: ";
	cin >> n1 >> n2;
	// maksimalnata stoinost na n1 i n2 se sudurja v max
	max = (n1 > n2 || n1<n2);
	do
	{
		if (max % n1 == 0 && max % n2 == 0)
		{
			cout << "nai malko obshto kratno = " << max << endl;
			break;
		}
		else
			++max;
	}

	while (n1 != n2);
	{
		if (n1 > n2)
			n1 -= n2;
		else
			n2 -= n1;
		cout << "nai golqm obsht delitel = " << n1 << endl;
	}

}
