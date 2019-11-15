#include <iostream>
using namespace std;
 
char alphabet(char ch) {
	if (ch == 'a') {
		int n = 1;
		cout << "a -> " << n << endl;
	}
	else if (ch == 'b') {
		int n = 2;
		cout << "b -> " << n << endl;
	}
	else if (ch == 'c') {
		int n = 3;
		cout << "c -> " << n << endl;
	}
	else if (ch == 'd') {
		int n = 4;
		cout << "d -> " << n << endl;
	}
	else if (ch == 'e') {
		int n = 5;
		cout << "e -> " << n << endl;
	}
	else if (ch == 'f') {
		int n = 6;
		cout << "f -> " << n << endl;
	}
	else if (ch == 'g') {
		int n = 7;
		cout << "g -> " << n << endl;
	}
	else if (ch == 'h') {
		int n = 8;
		cout << "h -> " << n << endl;
	}
	else if (ch == 'i') {
		int n = 9;
		cout << "i -> " << n << endl;
	}
	else if (ch == 'j') {
		int n = 10;
		cout << "j -> " << n << endl;
	}
	else if (ch == 'k') {
		int n = 11;
		cout << "k -> " << n << endl;
	}
	else if (ch == 'l') {
		int n = 12;
		cout << "l -> " << n << endl;
	}
	else if (ch == 'm') {
		int n = 13;
		cout << "m -> " << n << endl;
	}
	else if (ch == 'n') {
		int n = 14;
		cout << "n -> " << n << endl;
	}
	else if (ch == 'o') {
		int n = 15;
		cout << "o -> " << n << endl;
	}
	else if (ch == 'p') {
		int n = 16;
		cout << "p -> " << n << endl;
	}
	else if (ch == 'q') {
		int n = 17;
		cout << "q -> " << n << endl;
	}
	else if (ch == 'r') {
		int n = 18;
		cout << "r -> " << n << endl;
	}
	else if (ch == 's') {
		int n = 19;
		cout << "s -> " << n << endl;
	}
	else if (ch == 't') {
		int n = 20;
		cout << "t -> " << n << endl;
	}
	else if (ch == 'u') {
		int n = 21;
		cout << "u -> " << n << endl;
	}
	else if (ch == 'v') {
	int n = 22;
	cout << "v -> " << n << endl;
	}
	else if (ch == 'w') {
	int n = 23;
	cout << "w -> " << n << endl;
	}
	else if (ch == 'x') {
	int n = 24;
	cout << "x -> " << n << endl;
	}
	else if (ch == 'y') {
	int n = 25;
	cout << "y -> " << n << endl;
	}
	else if (ch == 'z') {
		int n = 26;
		cout << "z -> " << n << endl;
	}
	else cout << "Enter letter";
	return 0;
}
int main()
{
	char ch;
	cout << "Enter a letter= ";
	cin >> ch;
	cout << alphabet(ch);
}