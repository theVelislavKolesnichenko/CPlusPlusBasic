#include <iostream>
using namespace std;
void edinici(int a)
{
	cout << a % 10;
}
void desetici(int a)
{
	cout << a / 10 % 10;
}
void stotni(int a)
{
	cout << a / 100;
}
int main()
{
	int n = 837;
	cout << "cifrata na edinicite e:";
	edinici(n);
	cout << endl;
	cout << "cifrata na deseticite e:";
	desetici(n);
	cout << endl;
	cout << "cifrata na stotnite e:";
	stotni(n);
	cout << endl;
	return 0;
}