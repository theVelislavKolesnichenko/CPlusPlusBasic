#include <iostream>
using namespace std;

void enter(double& number);

int main()
{
	char c[10];

	cin.getline(c, 5);

	cout << sizeof(c) / sizeof(*c) << endl;

	int i = 0;

	while (c[i] != '\0')
	{
		i++;
	}

	cout << i << endl;
	int start = false;
	for (int i = 9; i >= 0; i--)
	{
		if (start)
		{
			cout << (int)c[i] << endl;
		}
		else if (c[i] == '\0') 
		{
			start = true;
		}
	}

	cout << strlen(c) << endl;
}
