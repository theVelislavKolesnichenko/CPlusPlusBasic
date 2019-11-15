#include <iostream>
using namespace std;

int speed(int v, int t);
int time(int S, int V);

int main()
{
	int S = 987;
	int t;
	int V;
	cout << "Raztoqnieto e: " << S << endl;
	cout << "Vuvedete vreme (h): ";
	cin >> t;
	cout << "Vuvedete skorostta (km/h): ";
	cin >> V;
	cout << "Vremeto za patuvane (h) e: " << time(S, V);
}

int speed(int S, int t)
{
	return S / t;
}
int time(int S, int V)
{
	return S / V;
}