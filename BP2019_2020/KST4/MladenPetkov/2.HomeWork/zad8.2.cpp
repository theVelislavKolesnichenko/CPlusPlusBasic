#include <iostream>
using namespace std;

int Vreme(int V);
int main()
{
	int V;
	cout << "S=987km\n";
	cout << "V=";
	cin >> V;
	cout << "_____________\n";
	cout << "t=?\n";
	cout << "t=" << Vreme(V) << "h";



	return 0;
}
int Vreme(int V)
{
	int S, t;
	S = 987;
	t = S / V;
	return t;
}