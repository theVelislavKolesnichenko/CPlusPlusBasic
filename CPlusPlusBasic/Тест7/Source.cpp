#include <iostream>
using namespace std;

void main() 
{
	double sum = 0, count = 0;
	
	for (int i = -187; i <= 781; i++)
	{
		if (i % 5 == 0) 
		{
			sum += i;
			count++;
		}
	}

	cout << sum / count << endl;
}