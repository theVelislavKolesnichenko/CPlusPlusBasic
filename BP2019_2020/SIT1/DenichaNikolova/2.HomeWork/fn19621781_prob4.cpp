#include <iostream>
using namespace std;

int number = 837;
int get_ed(int a);
int get_des(int b);
int get_st(int c);

int main()
{
	int ed, des, st;

	cout << number << endl;

	ed = get_ed(number);
	cout << ed << endl;

	des = get_des(number);
	cout << des << endl;

	st = get_st(number);
	cout << st << endl;

	return 0;
}
int get_ed(int a)
{
	int n1;
	n1 = number % 10;

	return n1;
}

int get_des(int b)
{
	int n2;

	number = number / 10;
	n2 = number % 10;
	return n2;
}

int get_st(int c)
{
	int n3;
	number = number / 10;
	n3 = number % 10;
	return n3;
}


