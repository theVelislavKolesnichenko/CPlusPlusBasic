#include <iostream>
using namespace std;
int azbuka(char a);
int main()
{
	char a;
	cout << "a= ";
	cin >> a;
	cout << a << azbuka(a);
}
int azbuka(char a) {
	switch (a) {
	case 'a':
	case 'A':
		return 1;
		break;
	case 'b':
	case 'B':
		return 2;
		break;
	case 'c':
	case 'C':
		return 3;
		break;
	case 'd':
	case 'D':
		return 4;
		break;
	case 'e':
	case 'E':
		return 5;
		break;
	case 'f':
	case 'F':
		return 6;
		break;
	case 'g':
	case 'G':
		return 7;
		break;
	case 'h':
	case 'H':
		return 8;
		break;
	case 'i':
	case 'I':
		return 9;
		break;
	case 'j':
	case 'J':
		return 10;
		break;
	case 'k':
	case 'K':
		return 11;
		break;
	case 'l':
	case 'L':
		return 12;
		break;
	case 'm':
	case 'M':
		return 13;
		break;
	case 'n':
	case 'N':
		return 14;
		break;
	case 'o':
	case 'O':
		return 15;
		break;
	case 'p':
	case 'P':
		return 16;
		break;
	case 'q':
	case 'Q':
		return 17;
		break;
	case 'r':
	case 'R':
		return 18;
		break;
	case 's':
	case 'S':
		return 19;
		break;
	case 't':
	case 'T':
		return 20;
		break;
	case 'u':
	case 'U':
		return 21;
		break;
	case 'v':
	case 'V':
		return 22;
		break;
	case 'w':
	case 'W':
		return 23;
		break;
	case 'x':
	case 'X':
		return 24;
		break;
	case 'y':
	case 'Y':
		return 25;
		break;
	case 'z':
	case 'Z':
		return 26;
		break;
	default:
		return -1;
		break;
	}
}