#include <iostream>
int abc(char ch);

using namespace std;

int main() {

	char c;
	cout << "Input letter from a to z = " << endl;
	cin >> c;
	cout <<"= " << abc(c);

	return 0;
}

int abc(char ch) {
	int a, A;
	switch (ch)
	{
	case 'a' :
	{
		a = 1;
	}
	case 'A':
	{
		A = 1;
	}
	break;

	case 'b':
	{
		a = 2;
	}
	case 'B':
	{
		A = 2;
	}
	break;

	case 'c':
	{
		a = 3;
	}
	case 'C':
	{
		A = 3;
	}
	break;
	case 'd':
	{
		a = 4;
	}
	case 'D':
	{
		A = 4;
	}
	break;

	case 'e':
	{
		a = 5;
	}
	case 'E':
	{
		A = 5;
	}
	break;
	case 'f':
	{
		a = 6;
	}
	case 'F':
	{
		A = 6;
	}
	break;

	case 'g':
	{
		a = 7;
	}
	case 'G':
	{
		A = 7;
	}
	break;

	case 'h':
	{
		a = 8;
	}
	case 'H':
	{
		A = 8;
	}
	break;

	case 'i':
	{
		a = 9;
	}
	case 'I':
	{
		A = 9;
	}
	break;

	case 'j':
	{
		a = 10;
	}
	case 'J':
	{
		A = 10;
	}
	break;

	case 'k':
	{
		a = 11;
	}
	case 'K':
	{
		A = 11;
	}
	break;

	case 'l':
	{
		a = 12;
	}
	case 'L':
	{
		A = 12;
	}
	break;
	case 'm':
	{
		a = 13;
	}
	case 'M':
	{
		A = 13;
	}
	break;

	case 'n':
	{
		a = 14;
	}
	case 'N':
	{
		A = 14;
	}
	break;

	case 'o':
	{
		a = 15;
	}
	case 'O':
	{
		A = 15;
	}
	break;

	case 'p':
	{
		a = 16;
	}
	case 'P':
	{
		A = 16;
	}
	break;

	case 'q':
	{
		a = 17;
	}
	case 'Q':
	{
		A = 17;
	}
	break;

	case 'r':
	{
		a = 18;
	}
	case 'R':
	{
		A = 18;
	}
	break;

	case 's':
	{
		a = 19;
	}
	case 'S':
	{
		A = 19;
	}
	break;

	case 't':
	{
		a = 20;
	}
	case 'T':
	{
		A = 20;
	}
	break;

	case 'u':
	{
		a = 21;
	}
	case 'U':
	{
		A = 21;
	}
	break;

	case 'v':
	{
		a = 22;
	}
	case 'V':
	{
		A = 22;
	}
	break;

	case 'w':
	{
		a = 23;
	}
	case 'W':
	{
		A = 23;
	}
	break;

	case 'x':
	{
		a = 24;
	}
	case 'X':
	{
		A = 24;
	}
	break;

	case 'y':
	{
		a = 25;
	}
	case 'Y':
	{
		A = 25;
	}
	break;

	case 'z':
	{
		a = 26;
	}
	case 'Z':
	{
		A = 26;
	}
	break;


	}
	return a, A;
}