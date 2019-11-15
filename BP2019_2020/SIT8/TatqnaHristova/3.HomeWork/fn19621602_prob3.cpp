#include <iostream>
using namespace std;

void proNum(double a);

int main()
{
	double a;
	cout << "a= ";
	cin >> a;
	proNum(a);

	return 0;
}
void proNum(double a) {
	if (a > 0) {
		cout << "positive" << endl;
	}
	else if(a<0){
		cout << "negative" << endl;
	}
	else {
		cout << "zero" << endl;
	}
}