#include <iostream>
using namespace std;
float float_in(char ch);

int main() {
	int a, b;
	a = float_in('a');
	b = float_in('b');
	printf("~a = %d\n", a = ~a); 
	printf("~b = %d\n", b = ~b);
	printf("a&b = %d\n", a & b); 
	printf("a|b = %d\n", a | b);  
	printf("a^b = %d\n", a ^ b); 
	printf("a<<5 = %d\n", a << 5); 
	printf("b>>4 = %d\n", b >> 4);  
	


	return 0;
}
float float_in(char ch) {
	float n;
	cout << ch << " = ";
	cin >> n;
	return n;
}