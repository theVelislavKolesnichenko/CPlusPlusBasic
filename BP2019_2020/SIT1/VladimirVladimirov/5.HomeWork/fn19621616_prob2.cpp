#include <iostream>
using namespace std;
unsigned long countDigit(unsigned long n);

int main() {

	
        unsigned long n;
		cout << "Въведете число от -2147483648 до 2147483647" << endl;
		cin >> n;
		if ((n >= -2147483647LL) && (n <= 2147483647)) {
			cout << "Броят на цифрите от въведеното число е : " << countDigit(n);
		}
		else {
			cout << "Не сте въвели число в интервала от -2147483648 до 2147483647 " << endl;
		}
		
		return 0;
}

unsigned long countDigit(unsigned long n)
{
	int count = 0;
		while (n != 0) {
			n = n / 10;
			++count;
		}
		return count;
	}
