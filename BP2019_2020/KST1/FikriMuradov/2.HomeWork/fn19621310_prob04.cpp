#include <iostream>
#include <math.h>
using namespace std;

int edinici(int a)
{
	return a % 10;
}

int desetici(int a)
{
	return a / 10 % 10;
}

int stotici(int a)
{
	return a / 100;
}


int main()
{
	int a;
	a = 873;
	
	cout << "Edinica:" << edinici(a) << endl;
	cout << "Desetica:" << desetici(a) << endl;
	cout << "Stotica: " << stotici(a) << endl;

	return 0;
}