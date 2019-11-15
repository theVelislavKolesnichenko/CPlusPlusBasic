#include <iostream>
using namespace std;
int prosto(int n);
int main() {
	int flag;
	cout << "The prime numbers are:"<<endl;
	for (int i = 1; i < 20;i++) {
		flag = prosto(i);
		if (flag == 1) {
			cout << i<<"\n";
		}
	}
	return 0;
}
int prosto(int n) {
	int flag = 1;
	for (int i = 2; i <= n / 2; ++i) {
		if (n % i == 0) {
			flag = 0;
			break;
		}
	}
	return flag;
}