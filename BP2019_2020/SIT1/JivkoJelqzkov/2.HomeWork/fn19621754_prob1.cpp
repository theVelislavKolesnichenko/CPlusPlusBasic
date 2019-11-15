#include <iostream>
using namespace std;
void cstart();
void cfinal();
int main() {
	int a;
	cstart();
	cout << " Press a button to finalise ";
	cin >> a;
	cfinal();

}
void cstart() {
	cout << "Start ?"<<endl;

}
void cfinal() {
	cout << "Final !" << endl;
}