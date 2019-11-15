#include<iostream>
using namespace std;
int main()
{
	int a, b;
	cout << "vuvedete stoinost za a "; cin >> a; 
	cout << "vuvedete stoinost za b "; cin >> b;
	cout <<"bitovo ne  "<< ~ a << endl;
	cout << "bitovo i  " << (a&b) << endl;
	cout << "bitovo ili  " << (a|b) << endl;
	cout << "bitovo xor  " << (a^b) << endl;
	cout << "izmestvane v lqvo s 5 simvola  " << (a << 5) << endl;
	cout << "izmestvane v dqsno s 4 simvola  " << (b >> 4) << endl;
}
