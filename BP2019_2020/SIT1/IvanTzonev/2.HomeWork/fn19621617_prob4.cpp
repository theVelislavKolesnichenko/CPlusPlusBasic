#include <iostream>
using namespace std;
int unit(int n);
int tens(int n);
int hund(int n);

int main()
{
    int  n(837), u, t, h;
    u = unit(n);
	t = tens(n);
	h = hund(n);
    cout << "Единици = " << unit(n) << endl;
	cout << "Десетици = " << tens(n) << endl;
	cout << "Стотици = " << hund(n) << endl;
return 0;
}
    int unit(int n) 
{
return n % 10;
}
    int tens(int n) 
{
return (n / 10) % 10;
}
    int hund(int n) 
{
return (n / 100) % 10;
}