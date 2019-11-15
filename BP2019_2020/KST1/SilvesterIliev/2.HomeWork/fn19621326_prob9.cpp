#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;
struct struct1 {
	int a;
	int b;
	int c;
	int P;
};
int main()
{
	struct1 A;
	cout << "Въведете стойността на а =" << endl;
	cin >> A.a;
	cout << "Въведете стойността на b =" << endl;
	cin >> A.b;
	cout << "Въведете стойността на c =" << endl;
	cin >> A.c;
	A.P = A.a + A.b + A.c;
	cout << "Стойността на P е = " << A.P << endl;	
	return 0;
}