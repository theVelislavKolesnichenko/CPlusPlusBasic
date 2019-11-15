#include <iostream>
using namespace std;
int Num(char ch);
int main()
{
	char ch;
	cout << "Enter Letter from A to Z: ";
	cin >> ch;
	cout << ch << "-> " << Num(ch) << endl;
	return 0;
}
int Num(char ch)
{
	signed int a;
	switch (ch)
	{
	case'a':
	case 'A':
		return a = 1;
		break;
	case'b':
	case 'B':
		return a = 2;
		break;
	case'c':
	case 'C':
		return a = 3;
		break;
	case'd':
	case 'D':
		return a = 4;
		break;
	case'e':
	case 'E':
		return a = 5;
		break;
	case'f':
	case 'F':
		return a = 6;
		break;
	case'g':
	case 'G':
		return a = 7;
		break;
	case'h':
	case 'H':
		return a = 8;
		break;
	case'i':
	case 'I':
		return a = 9;
		break;
	case'j':
	case 'J':
		return a = 10;
		break;
	case'k':
	case 'K':
		return a = 11;
		break;
	case'l':
	case 'L':
		return a = 12;
		break;
	case'm':
	case 'M':
		return a = 13;
		break;
	case'n':
	case 'N':
		return a = 14;
		break;
	case'o':
	case 'O':
		return a = 15;
		break;
	case'p':
	case 'P':
		return a = 16;
		break;
	case'q':
	case 'Q':
		return a = 17;
		break;
	case'r':
	case 'R':
		return a = 18;
		break;
	case's':
	case 'S':
		return a = 19;
		break;
	case't':
	case 'T':
		return a = 20;
		break;
	case'u':
	case 'U':
		return a = 21;
		break;
	case'v':
	case 'V':
		return a = 22;
		break;
	case'w':
	case 'W':
		return a = 23;
		break;
	case'x':
	case 'X':
		return a = 24;
		break;
	case'y':
	case 'Y':
		return a = 25;
		break;
	case'z':
	case 'Z':
		return a = 26;
		break;
	}
}