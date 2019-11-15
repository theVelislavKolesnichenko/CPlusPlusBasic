#include <iostream>
using namespace std;
int edi(int a);
int des(int a);
int sto(int a);
int main() {
	int x;
	cout << "a=";
	cin >> x;
	cout << edi(x)<<endl;
	cout << des(x)<<endl;
	cout << sto(x)<<endl;
}
int edi(int a) {
	return a % 10;
	
}
int des(int a) {
	return a%(100) / 10;
}
int sto(int a) {
	return a / 100;
	
}