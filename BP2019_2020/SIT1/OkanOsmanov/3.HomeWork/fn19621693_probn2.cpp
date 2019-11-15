#include <iostream>
using namespace std;
float po_golqmoCislo(float cislo1 ,float cislo2);
int main()
{
	float cislo1, cislo2;
	cout << "insert two numbers:\n";
	cin >> cislo1 >> cislo2;
	cout << "numbers is :" << po_golqmoCislo(cislo1 ,  cislo2);
}
float po_golqmoCislo(float cislo1, float cislo2)
{
	if (cislo1 > cislo2)
	{
		return cislo1;
	}
	else
	{
		return cislo2;
	}


}