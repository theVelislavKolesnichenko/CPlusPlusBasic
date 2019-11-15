#include <iostream>
using namespace std;
void ed(int a1)
{
	cout << a1 % 10 << endl;
}
void des(int a2)
{
	cout << (a2 / 10) % 10 << endl;
}
void sto(int a3)
{
	cout << a3 / 100 << endl;
}
int main()
{
	int x = 837;
	cout << "edinicite na chisloto sa" << endl;
	ed(x);
	cout << "deseticite na chisloto sa" << endl;
	des(x);
	cout << "stoticite na chisloto sa" << endl;
	sto(x);
}