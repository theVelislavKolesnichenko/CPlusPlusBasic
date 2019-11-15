#include <iostream>
using namespace std;

void f(char a);

int main()
{
	char a;

	cout << "vuvedete a-z=";
	cin >> a;
	f(a);
	return 0;
}
void f(char a)
{
	switch (a)
	{
	case 'a':cout << "a,1"; break;
	case 'A':cout << "A,1"; break;
	case 'b':cout << "b,2"; break;
	case 'B':cout << "B,2"; break;
	case 'c':cout << "c,3"; break;
	case 'C':cout << "C,3"; break;
	case 'd':cout << "d,4"; break;
	case 'D':cout << "D,4"; break;
	case 'e':cout << "e,5"; break;
	case 'E':cout << "E,5"; break;
	case 'f':cout << "f,6"; break;
	case 'F':cout << "F,6"; break;
	case 'g':cout << "g,7"; break;
	case 'G':cout << "G,7"; break;
	case 'h':cout << "h,8"; break;
	case 'H':cout << "H,8"; break;
	case 'i':cout << "i,9"; break;
	case 'I':cout << "I,9"; break;
	case 'j':cout << "j,10"; break;
	case 'J':cout << "J,10"; break;
	case 'k':cout << "k,11"; break;
	case 'K':cout << "K,11"; break;
	case 'l':cout << "l,12"; break;
	case 'L':cout << "L,12"; break;
	case 'm':cout << "m,13"; break;
	case 'M':cout << "M,13"; break;
	case 'n':cout << "n,14"; break;
	case 'N':cout << "N,14"; break;
	case 'o':cout << "o,15"; break;
	case 'O':cout << "O,15"; break;
	case 'p':cout << "p,16"; break;
	case 'P':cout << "P,16"; break;
	case 'q':cout << "q,17"; break;
	case 'Q':cout << "Q,17"; break;
	case 'r':cout << "r,18"; break;
	case 'R':cout << "R,18"; break;
	case 's':cout << "s,19"; break;
	case 'S':cout << "S,19"; break;
	case 't':cout << "t,20"; break;
	case 'T':cout << "T,20"; break;
	case 'u':cout << "u,21"; break;
	case 'U':cout << "U,21"; break;
	case 'v':cout << "v,22"; break;
	case 'V':cout << "V,22"; break;
	case 'w':cout << "w,23"; break;
	case 'W':cout << "W,23"; break;
	case 'x':cout << "x,24"; break;
	case 'X':cout << "X,24"; break;
	case 'y':cout << "y,25"; break;
	case 'Y':cout << "Y,25"; break;
	case 'z':cout << "z,26"; break;
	case 'Z':cout << "Z,26"; break;
	default:cout << "ne e vuvedena bukva,opitai pak";
	}
}