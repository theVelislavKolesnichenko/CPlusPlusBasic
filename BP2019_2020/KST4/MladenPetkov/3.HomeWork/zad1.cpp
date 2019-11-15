#include <iostream>
using namespace std;

int ne(int a, int b);
int i(int a, int b);
int ili1(int a, int b);
int ili2(int a, int b);
int nalqvo(int a, int b);
int nadqsno(int a, int b);
int main()
{
	int a, b;
	cout << "a=";
	cin >> a;
	cout << "b=";
	cin >> b;
	cout << ne(a, b) << endl;
	cout << i(a, b) << endl;
	cout << ili1(a, b) << endl;
	cout << ili2(a, b) << endl;
	cout << nalqvo(a, b) << endl;
	cout << nadqsno(a, b) << endl;


	return 0;
}
int ne(int a, int b)
{
	int x;
	x = ~a;
	return x;
}
int i(int a, int b) {
	int x;
	x = (a & b);
	return x;
}
int ili1(int a, int b) {
	int x;
	x = (a | b);
	return x;
}
int ili2(int a, int b) {
	int x;
	x = (a ^ b);
	return x;
}
int nalqvo(int a, int b) {
	int x = (a << 5);
	return x;
}
int nadqsno(int a, int b) {
	int x = (a >> 4);
	return x;
}