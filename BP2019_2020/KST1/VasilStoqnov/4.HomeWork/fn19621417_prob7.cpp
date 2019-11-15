#include <iostream>
using namespace std;
int chislo = 0, chisla = 0, otricatelni = 0, polojitelni = 0;

int zvezdichka();
int main()

{
	

	zvezdichka();
	return 0;

}
int zvezdichka()
{
	cout << "vuvedete 10 chisla polojitelni i/ili otricatelni=" << endl;
	do
	{
		chisla++;
		cin >> chislo;


		if (chislo > 0)polojitelni++;
		else otricatelni++;

	} while (chisla<10);



	cout << "Broq na chislata e: " << chisla << " " << "Broi otricatelni: " << otricatelni << " " << "Broi polojitelni: " << polojitelni << endl;

	return 0;
}