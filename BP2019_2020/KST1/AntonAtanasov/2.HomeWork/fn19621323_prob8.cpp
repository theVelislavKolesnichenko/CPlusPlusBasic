#include <iostream>
using namespace std;
int Speed_Calculation(int t);
int Time_Calculation(int v);
const int S = 987;

int main()
{
	int t;
	int v;
	cout << "Distance = " << S << endl << endl;
	cout << "Time (h) = ";
	cin >> t;
	cout << "Speed (km/h) = " << Speed_Calculation(t) << endl << endl;
	cout << "Speed (km/h) = ";
	cin >> v;
	cout << "Time (h) = " << Time_Calculation(v);
}

int Speed_Calculation(int t)
{
	return S / t;
}
int Time_Calculation(int v)
{
	return S / v;
}