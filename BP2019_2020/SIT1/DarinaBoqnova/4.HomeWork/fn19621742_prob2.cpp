#include <iostream>
using namespace std;

string seasons(int p)
{
	string a;
	switch (p)
	{
	case 1:
	{
		a = "Winter";
	}
	break;
	case 2:
	{
		a = "Winter";
	}
	break;
	case 3:
	{
		a = "Spring";
	}
	break;
	case 4:
	{
		a = "Spring";
	}
	break;
	case 5:
	{
		a = "Spring";
	}
	break;
	case 6:
	{
		a = "Summer";
	}
	break;
	case 7:
	{
		a = "Summer";
	}
	break;
	case 8:
	{
		a = "Summer";
	}
	break;
	case 9:
	{
		a = "Summer";
	}
	break;
	case 10:
	{
		a = "Fall";
	}
	break;
	case 11:
	{
		a = "Fall";
	}
	break;
	case 12:
	{
		a = "Winter";
	}
	break;
	default:
	{
		a = "This is not a month";
	}
	break;
	}
	return a;
}

int main()
{
	int p;
	cout << "Number of month - ";
	cin >> p;
	cout << seasons(p) << endl;

	system("Pause");
	return 0;
}