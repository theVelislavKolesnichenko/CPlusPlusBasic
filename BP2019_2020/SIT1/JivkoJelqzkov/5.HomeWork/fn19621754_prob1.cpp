#include <iostream>
using namespace std;
float calc(float a, float b);
int main() {
	float a;
	cout << "a=";
	cin >> a;
	float b;
	do {
		cout << "b=";
		cin >> b;
		cout<<"The result is:"<<calc(a, b)<<endl;
		
	} while (b != 0);



}
float calc(float a, float b) {
	float s = a * b;
	return s;


}