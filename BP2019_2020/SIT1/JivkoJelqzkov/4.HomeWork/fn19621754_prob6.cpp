#include <iostream>
#include <iomanip>
using namespace std;
void doW();
void W();
void f();
int main() {
	doW();
	W();
	f();
	
}
void doW(){
	int i = 6;
	do {
	
		cout <<setw(i)<<setfill('%')<<" "<<endl;
		i--;


	} while (i != 0);
	cout << endl;

}
void W() {
	int i = 2;
	int x=0;
	while (i != 0) {
		if (x != 4) {
			cout << setw(i) << setfill('%') << " " << endl;
			i++;
		}
		if (i == 4)x = 4;
		if (x == 4) {
			cout << setw(i) << setfill('%') << " " << endl;
			i--;
		}
	}
	cout << endl;
}
void f() {
	int i2 = 0;
	for (int i = 11; i > 0; i = i - 2) {
		if (i == 11){
			cout << setw(i) << setfill('%') << " ";
			cout << setw(i2) << setfill(' ') << " " << endl;
			i2++;
		}
		else {
			cout << setw(i2) << setfill(' ') << " ";
			cout << setw(i) << setfill('%') << " ";
			cout << setw(i2) << setfill(' ') << " " << endl;
			i2++;
		}

		}
	}
