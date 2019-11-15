#include <iostream>
using namespace std;

int main() 
{
	unsigned int a;	  
	unsigned int b;	  
	int c = 0;
	cout<< "Въведи число:" << endl;
	cin >> a;
	cout << "Въведи число:" << endl;
	cin >> b;

	c = a & b;             
	cout << c << endl;

	c = a | b;             
	cout << c << endl;

	c = a ^ b;             
	cout << c << endl;

	c = ~a;                
	cout << c << endl;

	c = a << 5;            
	cout << c << endl;

	c = a >> 4;       
	cout << c << endl;
	c = b << 5;
	cout << c << endl;

	c = b >> 4;
	cout << c << endl;
	return 0;
}