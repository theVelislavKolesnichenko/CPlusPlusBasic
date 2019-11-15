#include <iostream>
using namespace std;
void oddoreven(int a);
int main()
{
	int a;
	cout << "a=";
	cin >> a;
	oddoreven(a);
	system("pause");
	return 0;
}
void oddoreven(int a) {
	if (a % 2 == 0) {
		cout << "Even" << endl;
	}
	else {
		cout << "Odd" << endl;
	}
}