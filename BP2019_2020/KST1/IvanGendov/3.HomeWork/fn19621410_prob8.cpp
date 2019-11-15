#include <iostream>
using namespace std;
int alphabet(char nomer);
int main()
{
	char chislo;
	cout << "Vuvedete bukva ot latinskata azbuka = "; cin >> chislo;
	cout << "Bukvata e na " << alphabet(chislo) << " mqsto v azbukata";
	return 0;
}
int alphabet(char nomer)
{
	char chislo = 0;
	switch (nomer)
	{
	case 'a':
		chislo++;
		break;
	case'A':
		chislo++;
			break;
	case 'b':
		chislo += 2;
		break;
	case 'B':
		chislo += 2;
		break;
	case 'c':
		chislo += 3;
		break;
	case 'C':
		chislo += 3;
		break;
	case 'd':
		chislo += 4;
		break;
	case'D':
		chislo += 4;
		break;
	case 'e':
		chislo += 5;
		break;
	case 'E':
		chislo += 5;
		break;
	case 'f':
		chislo += 6;
		break;
	case 'F':
		chislo += 6;
		break;
	case'g':
		chislo += 7;
		break;
	case 'G':
		chislo += 7;
		break;
	case'h':
		chislo += 8;
		break;
	case'H':
		chislo += 8;
		break;
	case'i':
		chislo += 9;
		break;
	case'I':
		chislo += 9;
		break;
	case 'k':
		chislo += 10;
		break;
	case 'K':
		chislo += 10;
		break;
	case'l':
		chislo += 11;
		break;
	case'L':
		chislo += 11;
		break;
	case'm':
		chislo += 12;
		break;
	case'M':
		chislo += 12;
		break;
	case'n':
		chislo += 13;
		break;
	case'N':
		chislo += 13;
		break;
	case'o':
		chislo += 14;
		break;
	case'O':
		chislo += 14;
		break;
	case'p':
		chislo += 15;
		break;
	case'P':
		chislo += 15;
		break;
	case'q':
		chislo += 16;
		break;
	case'Q':
		chislo += 16;
		break;
	case'r':
		chislo += 17;
		break;
	case'R':
		chislo += 17;
		break;
	case's':
		chislo += 18;
		break;
	case'S':
		chislo += 18;
		break;
	case't':
		chislo += 19;
		break;
	case'T':
		chislo += 19;
		break;
	case'u':
		chislo += 20;
		break;
	case'U':
		chislo += 20;
		break;
	case'v':
		chislo += 21;
		break;
	case'V':
		chislo += 21;
		break;
	case'x':
		chislo += 22;
		break;
	case'X':
		chislo += 22;
		break;
	case'y':
		chislo += 23;
		break;
	case'Y':
		chislo += 23;
		break;
	case'z':
		chislo += 24;
		break;
	case'Z':
		chislo += 24;
		break;
	default:
		chislo -= 1;
		break;
		return chislo;
	}
}