#include <iostream>
using namespace std;
void ed(int a){

	cout << a % 10;
}
void de(int a) {

	cout << a / 100 % 10;
}
void st(int a){

	cout << a / 100 % 10;
}
int main()
{
	int n = 837;
	cout << "cifrata ot edinicite e "; de(n);
	cout << endl << "cifrata ot deseticite e"; de(n);
	cout << endl << "cifrata ot stoticite e"; st(n);
}
