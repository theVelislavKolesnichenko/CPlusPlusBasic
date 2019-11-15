#include <iostream>
using namespace std;

int numbers(int a, int b, int c);

struct triangle
{
	int a, b, c;
};
int main()
{
	triangle A;
	cout << "side 'a' =";
	cin >> A.a;
	cout << "side 'b' =";
	cin >> A.b;
	cout << "side 'c' =";
	cin >> A.c;

	if (A.a == A.b == A.c)
		cout << "Equilateral triangle. The perimeter equals to =" << numbers(A.a, A.b, A.c);

	else if (A.a == A.b || A.b == A.c || A.c == A.a)
		cout << "Isosceles triangle. The perimeter equals to =" << numbers(A.a, A.b, A.c);

	else
		cout << "Scalene Triangle. The perimeter equals to =" << numbers(A.a, A.b, A.c);
	return 0;
}
int numbers(int a, int b, int c)
{
	return a + b + c;
}