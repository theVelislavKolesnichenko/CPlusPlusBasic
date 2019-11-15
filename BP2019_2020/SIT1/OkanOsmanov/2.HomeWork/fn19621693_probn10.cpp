#include <iostream>
using namespace std;

struct Rectangle {
	int a, b;
};

int main()
{
	Rectangle S;
	cout << "Enter a and b:\n";
	cin >> S.a >> S.b;
	cout << "S=" << S.a * S.b;
}