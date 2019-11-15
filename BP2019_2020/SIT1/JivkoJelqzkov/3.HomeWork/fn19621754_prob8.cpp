#include <iostream>
using namespace std;
void Alphabet(char letter);
int main() {
	char a;
	cout << "Letter=";
	cin >> a;
	Alphabet(a);
}
void Alphabet(char letter) {
	switch (letter) {
	case 'a':cout <<letter<<"="<<1; break;
	case 'b':cout << letter << "=" << 2; break;
	case 'c':cout << letter << "=" << 3; break;
	case 'd':cout << letter << "=" << 4; break;
	case 'e':cout << letter << "=" << 5; break;
	case 'f':cout << letter << "=" << 6; break;
	case 'g':cout << letter << "=" << 7; break;
	case 'h':cout << letter << "=" << 8; break;
	case 'i':cout << letter << "=" << 9; break;
	case 'j':cout << letter << "=" << 10; break;
	case 'k':cout << letter << "=" << 11; break;
	case 'l':cout << letter << "=" << 12; break;
	case 'm':cout << letter << "=" << 13; break;
	case 'n':cout << letter << "=" << 14; break;
	case 'o':cout << letter << "=" << 15; break;
	case 'p':cout << letter << "=" << 16; break;
	case 'q':cout << letter << "=" << 17; break;
	case 'r':cout << letter << "=" << 18; break;
	case 's':cout << letter << "=" << 19; break;
	case 't':cout << letter << "=" << 20; break;
	case 'u':cout << letter << "=" << 21; break;
	case 'v':cout << letter << "=" << 22; break;
	case 'w':cout << letter << "=" << 23; break;
	case 'x':cout << letter << "=" << 24; break;
	case 'y':cout << letter << "=" << 25; break;
	case 'z':cout << letter << "=" << 26; break;
	default:cout << "Wrong Input"; break;
	}
}