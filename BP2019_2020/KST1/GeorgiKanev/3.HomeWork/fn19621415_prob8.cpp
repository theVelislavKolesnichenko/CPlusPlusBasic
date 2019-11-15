#include <iostream>
using namespace std;

int abc(char ch);

int main() {
	char a;
	cout << "Enter latin letter" << endl;
	cin >> a;
	cout << abc(a) << endl;
}

int abc(char ch) {
	int a;
	switch (ch) {
	case 'a': {a = 1; }break;
	case 'b': {a = 2; }break;
	case 'c': {a = 3; }break;
	case 'd': {a = 4; }break;
	case 'e': {a = 5; }break;
	case 'f': {a = 6; }break;
	case 'g': {a = 7; }break;
	case 'h': {a = 8; }break;
	case 'i': {a = 9; }break;
	case 'j': {a = 10; }break;
	case 'k': {a = 11; }break;
	case 'l': {a = 12; }break;
	case 'm': {a = 13; }break;
	case 'n': {a = 14; }break;
	case 'o': {a = 15; }break;
	case 'p': {a = 16; }break;
	case 'q': {a = 17; }break;
	case 'r': {a = 18; }break;
	case 's': {a = 19; }break;
	case 't': {a = 20; }break;
	case 'u': {a = 21; }break;
	case 'v': {a = 22; }break;
	case 'w': {a = 23; }break;
	case 'x': {a = 24; }break;
	case 'y': {a = 25; }break;
	case 'z': {a = 26; }break;
	case 'A': {a = 1; }break;
	case 'B': {a = 2; }break;
	case 'C': {a = 3; }break;
	case 'D': {a = 4; }break;
	case 'E': {a = 5; }break;
	case 'F': {a = 6; }break;
	case 'G': {a = 7; }break;
	case 'H': {a = 8; }break;
	case 'I': {a = 9; }break;
	case 'J': {a = 10; }break;
	case 'K': {a = 11; }break;
	case 'L': {a = 12; }break;
	case 'M': {a = 13; }break;
	case 'N': {a = 14; }break;
	case 'O': {a = 15; }break;
	case 'P': {a = 16; }break;
	case 'Q': {a = 17; }break;
	case 'R': {a = 18; }break;
	case 'S': {a = 19; }break;
	case 'T': {a = 20; }break;
	case 'U': {a = 21; }break;
	case 'V': {a = 22; }break;
	case 'W': {a = 23; }break;
	case 'X': {a = 24; }break;
	case 'Y': {a = 25; }break;
	case 'Z': {a = 26; }break;
	default: {a = -1; } break;

	}
	return a;
}