#include <iostream>
using namespace std;

struct Triangle {
	int a, b, c;
};

int sum_triangle(Triangle t)
{
	int sum = 0;
	sum = t.a + t.b + t.c;
	return sum;
}


int main()
{
	struct Triangle t;
	int sum = 0;
	cout << "Enter 3 Numbers :";
	cin >> t.a >> t.b >> t.c;

	sum = sum_triangle(t);
	cout << "Sum = " << sum;

	return 0;
}

