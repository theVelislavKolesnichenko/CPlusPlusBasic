#include <iostream>
void func();
using namespace std;
int main() {
	func();
	return 0;
}
void func()
{
	int n=1;
	cout << "vuvedete kraina stoinost (polojitelna)=";
	signed b;
	cin >> b;
	while (n <= b) {
		cout << n << endl;
		n++;
	}
}