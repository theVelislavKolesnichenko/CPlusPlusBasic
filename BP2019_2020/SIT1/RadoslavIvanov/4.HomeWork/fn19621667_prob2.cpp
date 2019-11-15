#include <iostream>
#include <string.h>
using namespace std;

string Month(int a);

int main()
{
	while (true)
	{
		int a;
		cin >> a;
		cout << Month(a) << endl;
	}
	return 0;
}

string Month(int a)
{

	switch (a)
	{
	case 1:
	{
		return "winter";
		break;
	}
	case 2:
	{
		return "winter";
		break;
	}
	case 3:
	{
		return "spring";
		break;
	}
	case 4:
	{
		return "spring";
		break;
	}
	case 5:
	{
		return "spring";
		break;
	}
	case 6:
	{
		return "summer";
		break;
	}
	case 7:
	{
		return "summer";
		break;
	}
	case 8:
	{
		return "summer";
		break;
	}
	case 9:
	{
		return "autumn";
		break;
	}
	case 10:
	{
		return "autumn";
		break;
	}
	case 11:
	{
		return "autumn";
		break;
	}
	case 12:
	{
		return "winter";
		break;
	}
	default:
	{
		return "month don't exist";
		break;
	}
	}

}