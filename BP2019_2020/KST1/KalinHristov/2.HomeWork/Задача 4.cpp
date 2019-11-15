#include <iostream>
#include <conio.h>
using namespace std;
int n1(int a);
int n2(int a);
int n3(int a);

int n1(int a)
{
	int edinici = a % 10;
	return edinici;
}
int n2(int a)
{
	int desetici = a/10 % 10;
	return desetici;
}
int n3(int a)
{
	int stotici = a/100;
	return stotici;
}
int main()
{
	
	int a;
	cout << "Vuvedete 3-cifreno chislo:";
	cin >> a;
	cout << "Edinici:"<<n1(a) << endl << "Desetici:"<<n2(a) << endl << "Stotici:" << n3(a) << endl;
}