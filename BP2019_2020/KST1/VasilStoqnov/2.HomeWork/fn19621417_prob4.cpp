#include <conio.h>
#include <iostream>
using namespace std;
int edinici(int a);
int desitici(int a);
int stotici(int a);

int main()
{
	int a;
	cout << "vuvedete tricifreno chislo=";
	cin >> a;
	cout << "Chisloto na edinicite e " << edinici(a) << endl << "Chisloto na deseticite e " << desitici(a) << endl << "Chisloto na stoticite e " << stotici(a);
	return 0;
}
int edinici(int a)
{
	return a % 10;
}
int desitici(int a)
{
	return a / 10 % 10;

}
int stotici(int a)
{
	return a / 100;
}
