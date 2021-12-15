#include <iostream>
using namespace std;

struct MinMax {
	int min, max;
};

MinMax search(int a[], int length);

int main()
{
	const int length = 7;
	int a[length] = { 1,2,3,30,1,70,4 };

	MinMax result = search(a, length);

	cout << "Max value is " << result.max 
		 << ". Min values is " << result.min << endl;
}

MinMax search(int a[], int length)
{
	MinMax minMax;
	minMax.min = minMax.max = a[0];
	for (int i = 1; i < length; i++)
	{
		if (minMax.max < a[i]) 
		{
			minMax.max = a[i];
		}
		if (minMax.min > a[i])
		{
			minMax.min = a[i];
		}
	}
	return minMax;
}