#include <iostream>
using namespace std;
void visokosna(int a);
int main() {
	int a;
	do
	{		
		cout << "a= ";
		cin >> a;
		visokosna(a);
	} 
	while (a >= 0);
}
void visokosna(int a) {
	if (a % 4 == 0)
		cout << "visokosna";
	else
		cout << "ne e visokosna";
}