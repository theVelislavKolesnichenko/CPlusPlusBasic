#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	char a ='%';
	cout << setw(5) << setfill(a) << a << endl;
	cout << setw(4) << setfill(a) << a << endl;
	cout << setw(3) << setfill(a) << a << endl;
	cout << setw(2) << setfill(a) << a << endl;
	cout << setw(1) << setfill(a) << a << endl;
	/*for (int i = 5; i > 0; i--) {
		cout << setw(i) << setfill(a) << a << endl;
	} */ //2ри начин, по-кратък, но и по-сложен.
	return 0;
}