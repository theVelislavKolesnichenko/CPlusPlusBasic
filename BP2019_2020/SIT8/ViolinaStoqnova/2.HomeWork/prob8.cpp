#include <iostream>
#include <math.h>

int pix(int s, int t);

using namespace std;

int main()
{
	int s, t,v;
	
	cout << "t=" <<  endl;
	cin >> t;
	cout << "s=" <<  endl;
	cin >> s;

	v = pix(s, t);
	cout << "v=" << v << endl;
	return 0;
}
int pix(int s, int t)
{
	int v;
	v = s /t;
	
	return v;
}
