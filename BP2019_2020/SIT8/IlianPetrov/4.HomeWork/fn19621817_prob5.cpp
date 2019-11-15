#include <iostream>
using namespace std;
int F(int a);

int main()
{
	int a;
	cout << "a= ";
	cin >> a;
	cout << F(a) << endl;
	return 0;
}
int F(int a)
{
	int i=0;
	while (i<(a-1)) {
		i++;
		cout << i <<" ";
		continue;
	}
	return a;
}