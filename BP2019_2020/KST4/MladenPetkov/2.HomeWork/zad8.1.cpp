#include <iostream>
using namespace std;

int Skorost(int t);
int main()
{
	int t;
	cout << "S=987km\n";
	cout << "t=";
	cin >> t;
	cout << "_____________\n";
	cout << "V=?\n";
	cout << "V=" << Skorost(t)<<"km/h";



	return 0;
}
int Skorost(int t)
{
	int S,V;
	S = 987;
	V = S / t;
	return V;
}