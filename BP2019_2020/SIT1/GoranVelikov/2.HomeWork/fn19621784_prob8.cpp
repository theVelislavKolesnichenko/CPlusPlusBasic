#include <iostream>
using namespace std;

int funct(char ch)
{
	int a;
	switch (ch)
	{
	case 'a': {a = 1;}break;
	case 'b': {a = 2;}break;
	case 'c': {a = 3;}break;
	case 'd': {a = 4;}break;
	case 'e': {a = 5;}break;
	case 'f': {a = 6;}break;
	case 'g': {a = 7;}break;
	case 'h': {a = 8;}break;
	case 'i': {a = 9;}break;
	case 'j': {a = 10;}break;
	case 'k': {a = 11;}break;
	case 'l': {a = 12;}break;
	case 'm': {a = 13;}break;
	case 'n': {a = 14;}break;
	case 'o': {a = 15;}break;
	case 'p': {a = 16;}break;
	case 'q': {a = 17;}break;
	case 'r': {a = 18;}break;
	case 's': {a = 19;}break;
	case 't': {a = 20;}break;
	case 'u': {a = 21;}break;
	case 'v': {a = 22;}break;
	case 'w': {a = 23;}break;
	case 'x': {a = 24;}break;
	case 'y': {a = 25;}break;
	case 'z': {a = 26;}break;
	}		return a;
}
int main()
{
	char c;
	cin >> c;
	cout << funct(c)<<endl;
	return 0;
}