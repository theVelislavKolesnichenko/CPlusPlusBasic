#include <iostream>
using namespace std;
int Pos(int a, int b, int n);
int main() {
	int n,a,b;

	
		cout <<"num(+)= " << Pos(a,n) << endl;
		cout <<"num(-)= " << Pos(b,n) << endl;

	
	return 0;
}
int Pos(int a,int b, int n) {
	for (int i = 0; i < 10; i++)
	{
		cin >> n;
		if (n > 0) {
			a++;
		}
		else
		{
			b++;
		}

	}
	return a;
	return b;
}

