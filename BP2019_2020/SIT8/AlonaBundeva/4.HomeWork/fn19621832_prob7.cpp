#include <iostream>

using namespace std;
int main()
{
	int number, int positiveCount, int negativeCount, int sum;
	cout<<"Enter 10 integers: " << endl;
	for (int i = 0; i < 10; i++)
	{
		cin >> number;
		if (number > 0)
		{
		positiveCount++;
        sum = sum + number;
		}
		else
		{
        negativeCount++;
		}
	} 
	cout << sum << endl;
    cout << positiveCount << endl;
    cout << negativeCount << endl;
	return 0;
}