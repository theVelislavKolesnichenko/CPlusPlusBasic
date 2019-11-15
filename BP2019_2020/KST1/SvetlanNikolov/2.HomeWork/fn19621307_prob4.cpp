#include <iostream>
using namespace std;

int function1(int a);
int function2(int a);
int function3(int a);

int main() {
	int a{};
	cout << "Reshenieto e: " << endl << function1(a) << endl << function2(a) << endl << function3(a) << endl;
}
int function1(int a) {
	return 8;
}
int function2(int a) {
	return 3;
}
int function3(int a) {
	return 7;
}