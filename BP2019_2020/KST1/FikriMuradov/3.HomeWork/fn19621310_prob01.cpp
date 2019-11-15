#include <iostream>
using namespace std;

int ne_a (int a);
int ne_b(int b);
int i(int a, int b);
int ili(int a, int b);
int XOR (int a, int b);
int lqvo_a (int a);
int lqvo_b (int b);
int dqsno_a (int a);
int dqsno_b (int b);

int main()
{
	int a, b;
	
	cout << "Vuvedi a = ";
	cin >> a;
	cout << "Vuvedi b = ";
	cin >> b;
	
	cout << "Bitovo ne na a = " << ne_a(a) << endl;
	cout << "Bitovo ne na b = " << ne_b(b) << endl;
	cout << "Bitovo i = " << i(a, b) << endl;
	cout << "Bitovo ili = " << ili(a, b) << endl;
	cout << "Bitovo xor = " << XOR (a, b) << endl;
	cout << "Bitovo izmestvane nalqvo na a s 5 simvola = " << lqvo_a (a) << endl;
	cout << "Bitovo izmestvane nalqvo na b s 5 simvola = " << lqvo_b (b) << endl;
	cout << "Bitovo izmestvane nadqsno na a s 4 simvola = " << dqsno_a(a) << endl;
	cout << "Bitovo izmestvane nadqsno na b s 4 simvola = " << dqsno_b(b) << endl;
	
	return 0;
}
int ne_a (int a)
{
	return !a;
}

int ne_b(int b)
{
	return !b;
}

int i(int a, int b)
{
	return a & b;
}

int ili(int a, int b)
{
	return a | b;
}

int XOR (int a, int b)
{
	return a ^ b;
}

int lqvo_a (int a)
{
	return a << 5;
}

int lqvo_b (int b)
{
	return b << 5;
}

int dqsno_a (int a)
{
	return a >> 4;
}

int dqsno_b (int b)
{
	return b >> 4;
}
