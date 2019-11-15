#include <iostream>
#include<math.h>
using namespace std;
void uravnenie();
int main()
{
	uravnenie();
	return 0;
}
void uravnenie()
{
	double a, b, d, koreni, x = 0, x1 = 0, x2 = 0;
	cout << "Vuvedete chislo a="; cin >> a;
	cout << "Vuvedete chislo b="; cin >> b;
	cout << "Vuvedete chislo d="; cin >> d;
	koreni = pow(b, 2) - 4 * a * d;
	if (koreni > 0)
	{
		cout << "Uravnenieto ima dva korena\n";
		x1 = (-b + sqrt(pow(b, 2) - 4 * a * d)) / 2 * a;
		x2 = (-b - sqrt(pow(b, 2) - 4 * a * d)) / 2 * a;
		cout << "Ediniqt koren e " << x1 <<endl<< "Vtoriqt koren e " << x2;
	}
	else if (koreni == 0)
	{
		x = -(b / 2 * a);
		cout << "Uravnenieto ima edin koren x=" << x;
	}
	else
		cout << "Uravnenieto nqma koreni";
}