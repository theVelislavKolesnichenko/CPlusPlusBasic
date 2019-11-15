#include <iostream>
using namespace std;
void polojitelnoCislo();
int main()
{
	polojitelnoCislo();
}
void polojitelnoCislo()
{
	float cislo;
	cout << "vivedete cislo:\n";
	cin >> cislo;
	if (cislo > 0)
	{
		printf("polojitelno");
	}
	else
	{
		printf("otricatelno");
	}
}
