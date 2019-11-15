#include <iostream>
using namespace std;

int edinici(int x);
int desetici(int y);
int stotici(int z);
int main() {
	int a = 837;
	cout << edinici(a)<<endl;
	cout << desetici(a)<<endl;
	cout << stotici(a) << endl;
	return 0;
}
int edinici(int x) {
	return x % 10;
}
int desetici(int y) {
	return (y / 10)%10;
}
int stotici(int z) {
	return (z / 100) % 10;
}