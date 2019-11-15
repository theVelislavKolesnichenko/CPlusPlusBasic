#include <iostream>
using namespace std;
int edinici(int n);
int desetici(int n);
int stotici(int n);

int main() {
	cout << edinici(837) << endl;
	cout << desetici(837) << endl;
	cout << stotici(837) << endl;
    return 0;
}

int edinici(int n) {
	return (n % 10);
}

int desetici(int n) {
	return ((n/10) % 10);
}

int stotici(int n) {
	return ((n/100) % 10);
}