#include <iostream>
using namespace std;

int posOrNeg(int n);

int main()
{
	int n, m, a = 0, b = 0;
	for (int i = 0; i < 10; i++) {
		cout << "n= ";
		cin >> n;
		m = posOrNeg(n);
		if (m == 0) {
			a++;
		}
		else {
			b++;
		}
	}
	cout <<"Negative:"<< a<<endl <<"Positive:"<< b << endl;

	return 0;
}
int posOrNeg(int n) {
	if (n < 0) {
		return 0;
	}
	else {
		return 1;
	}
}
	
