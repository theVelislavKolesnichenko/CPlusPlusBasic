#include <iostream>
using namespace std;

int int_in(char ch);
int x( int a,int c1,int c2,int c3);

int main() {
	int a, c1, c2, c3;
	cout <<"Input Number= ";
	cin >> a;	
	
	c1 = a / 100;
	c2 = a / 10 % 10;
	c3 = a % 10;
    
	cout << "Number Of Hundreds: " << c1 << endl;
	cout << "Number of Tens: " << c2 << endl;
	cout << "Numbers of Units: " << c3 << endl;
	system("pause");
	return 0;
}

int int_in(char ch)
{
	int f;
	cout << ch << "=";
	cin >> f;
	return f;
}

int x(int a,int c1, int c2, int c3)
{
return 		c1 = a/ 100;
return      c2 = a/ 10 % 10;
return      c3 = a % 10;

}