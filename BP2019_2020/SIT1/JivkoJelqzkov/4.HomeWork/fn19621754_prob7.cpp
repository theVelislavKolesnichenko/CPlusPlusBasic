#include <iostream>
using namespace std;
void calc(float a, float& pos, float& neg);
int main() {
	float a[10];
	float pos=0, neg=0;
	for (int i = 0; i < 10; i++) {
		cout << "a" << i+1 << "=";
		cin >> a[i];
		calc(a[i], pos, neg);

	}
	cout << "Positive Numbers:" << pos<<endl;
	cout << "Negative Numbers:" << neg;
}
void calc(float a, float& pos, float& neg) {
	if (a >= 0) { pos++; }
	else neg++;
}