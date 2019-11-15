#include <iostream>
using namespace std;
int main() {
	int a, b;
	cout << "a=";
	cin >> a;
	cout << "b=";
	cin >> b;
	cout <<"Bit NO:a="<<~a<<" "<<"Bit NO:b="<<~b<<endl;
	cout <<"Bit AND:"<<(a & b)<<endl;
	cout << "Bit OR:" << (a | b)<<endl;
	cout << "Bit XOR:" << (a ^ b)<<endl;
	cout << "Bit to the left:a=" << (a<<5) << " " << "Bit to the left:b=" << (b<<5) << endl;
	cout << "Bit to the right:a=" << (a>>4) << " " << "Bit to the right:b=" << (b>>4) << endl;
	
}