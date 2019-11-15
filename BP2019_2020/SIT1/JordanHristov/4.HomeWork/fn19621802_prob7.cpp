#include <iostream>
using namespace std;

void chislo(int a[11]);
int main() {

	int b[11];
	chislo(b);
	return 0;
}
void chislo(int a[11]) {
	int i(1),n(0),p(0);
	while (i < 11) {
		cout << "Vuvedi chislo:";
		cin >> a[i];
		if (a[i] > 0) { p++; }
		else if(a[i]<0){ n++; }
		i++;
	}
	cout <<"Negative numbers:"<< n<<endl;
	cout <<"Positive numbers:"<< p<<endl;
}