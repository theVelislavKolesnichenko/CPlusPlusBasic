#include <iostream>

using namespace std;

int numbers(int a, int b);

struct rectangle
{
	int a, b;
};
int main()
{
	rectangle A;
	cout << "side 'a' =";
	cin >> A.a;
	cout << "side 'b' =";
	cin >> A.b;
	cout << "Solve for area S=" << numbers(A.a, A.b);


	
	return 0;
}
int numbers(int a, int b)
{
	return a * b;
}