#include <iostream>
#include <conio.h>
using namespace std;
float V(int S,int t)
{
	float v = S / t;
	return v;
}
int main()
{
	int s, v, t;
	cout << "Vuvedete razstoqnieto ot grad A do grad B s vlak:" << endl;
	cin >> s;
	cout << "Vuvedete vremeto v celi chasove za koeto shte go izmine vlaka:" << endl;
	cin >> t;
	cout << "Izvejdame skorostta na vlaka:" << V(s,t);

}