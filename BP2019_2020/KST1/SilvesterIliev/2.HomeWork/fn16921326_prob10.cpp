#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;
struct struct1 {
	int a;
	int b;
	int S;
};
int main()
{
	struct1 A;
	cout << "Въведете стойността на а =" << endl;
	cin >> A.a;
	cout << "Въведете стойността на b =" << endl;
	cin >> A.b;
	A.S = A.a * A.b;
	cout << "Стойността на P е = " << A.S << endl;
	return 0;
}