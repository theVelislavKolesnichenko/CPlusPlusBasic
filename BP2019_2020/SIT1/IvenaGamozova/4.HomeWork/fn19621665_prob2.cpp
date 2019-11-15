#include<iostream>
using namespace std;
void bu(int m);
int main()
{
	int m;
	cout << "m=";
	cin >> m;
	bu(m);
	system("pause");
	return 0;
}
void bu(int m)
{

	switch (m)
	{
	case 1:
	{
		cout << "Winter"; }
	break;
	case 2:
	{cout << "Winter"; }
	break;
	case 3:
	{cout << "Spring"; }
	break;
	case 4:
	{cout << "Spring"; }
	break;
	case 5:
	{cout << "Spring"; }
	break;
	case 6:
	{cout << "Summer"; }
	break;
	case 7:
	{cout << "Summer"; }
	break;
	case 8:
	{cout << "Summer"; }
	break;
	case 9:
	{cout << "Autumn"; }
	break;
	case 10:
	{cout << "Autumn"; }
	break;
	case 11:
	{cout << "Autumn"; }
	break;
	case 12:
	{cout << "Winter"; }
	break;
	default:
	{cout << "Invalid Month number";
	break; }
	}
}
