#include <iostream>
using namespace std;

int abc(char ch)
{
	int a;
	switch (ch)
	{
	case 'a':
	case 'A':
	{cout << 1;
		}
	break;
	case 'b':
	case 'B':
	{
		cout<<2;
	}
	break;
	case 'c':
	case 'C':
	{
		cout<<3;
	}
	break;
	case 'd':
	case 'D':
	{
		cout<<4;
	}
	break;
	case 'e':
	case 'E':
	{
		cout<<5;
	}
	break;
	case 'f':
	case 'F':
	{
		cout<<6;
	}
	break;
	case 'g':
	case 'G':
	{
		cout<<7;
	}
	break;
	case 'h':
	case 'H':
	{
		cout<<8;
	}
	break;
	case'i':
	case 'I':
	{
		cout<<9;
	}
	break;
	case 'j':
	case 'J':
	{
		cout<<10;
	}
	break;
	case 'k':
	case 'K':
	{
		cout<<11;
	}
	break;
	case 'l':
	case 'L':
	{
		cout<<12;
	}
	break;
	case 'm':
	case 'M':
	{
		cout<<13;
	}
	break;
	case 'n':
	case 'N':
	{
		cout<<14;
	}
	break;
	case 'o':
	case 'O':
	{
		cout<<15;
	}
	break;
	case 'p':
	case 'P':
	{
		cout<<16;
	}
	break;
	case 'q':
	case 'Q':
	{
		cout<<17;
	}
	break;
	case 'r':
	case 'R':
	{
		cout<<18;
	}
	break;
	case 's':
	case 'S':
	{
		cout<<19;
	}
	break;
	case 't':
	case 'T':
	{
		cout<<20;
	}
	break;
	case 'u':
	case 'U':
	{
		cout<<21;
	}
	break;
	case 'v':
	case 'V':
	{
		cout<<22;
	}
	break;
	case 'w':
	case 'W':
	{
		cout<<23;
	}
	break;
	case 'x':
	case 'X':
	{
		cout<<24;
	}
	break;
	case 'y':
	case 'Y':
	{
		cout<<25;
	}
	break;
	case 'z':
	case 'Z':
	{
		cout<<26;
	}
	break;
	}
	return 0;
}

int main()
{
	char c;
	cout << "Vavedi bukva ot latinskata azbuka" << endl;
	cout << "char = ";
	cin >> c;
	cout << "Nomerat na bukvata v azbukata e:" << endl;
	c = abc(c);
	return 0;
}