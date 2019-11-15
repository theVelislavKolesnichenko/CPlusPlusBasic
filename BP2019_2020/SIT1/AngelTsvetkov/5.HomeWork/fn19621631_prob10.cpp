#include <iostream>
using namespace std;
void funkciq(int &sum);
int main()
{
	int a, b;
	cin >> a;
	cin >> b;
	int sum = a+b;
	if (b > a){
		cout << &sum << endl;
		funkciq(sum);
	}
	else {}
	return 0;
}
void funkciq(int &sum)
{
	int sum1 = sum;
	cout << &sum1 << endl;
}