#include <iostream>
using namespace std;
void calc(float& a);
int main() {
	float a = 0;
	cout << "'A' before function:" << a<<endl;
	calc(a);
	cout << "'A' after function:" << a;
}
void calc(float& a) {
	cout << "a=";
	cin >> a;
}