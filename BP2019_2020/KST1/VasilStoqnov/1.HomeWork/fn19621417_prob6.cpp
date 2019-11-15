#include <iostream>
using namespace std;
int main(){
	int a, b, c, z, umnojenie;
		umnojenie = 2;
		cout << "a=";
		cin >> a;
		cout << "b=";
		cin >> b;
		cout << "c=";
		cin >> c;
		z = umnojenie*(a - b)*(a - c);
		cout << "z=2*(a-b)*(a-c)=" << z;
		return 0;

}