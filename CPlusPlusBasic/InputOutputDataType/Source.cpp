#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main() 
{
	cout << "C++ Input Output" << endl;
	cout << "C++ Data Type\n";

	short int ismall = -17, a, b; //-32.768 - 32.767
	int idefault = 49; //-2147483648 - 2147483647
	long int ibig = 987; /*-2147483648 - 2147483647*/

	float dsmall = -3.25; //10^-38 - 10^38
	double ddefault = 6.0234567e17; //10^-308 - 10^308
	long double dbig = 2.25; //10^-4932 - 10^4932

	float fwhole = 2.000000;
	const double pi = 3.1415926535897932384626;

	bool bt = true, bf = false;

	char character = 'A';
	string stringvalue = "Output test";

	cout << "*" << ismall << "*" << endl;
	cout << "*" << setw(6) << ismall << "*" << endl << endl;
	cout << left;
	cout << "*" << stringvalue << "*" << endl;
	cout << "*" << setw(20) << stringvalue << "*" << endl;
	cout << right;
	cout << "*" << setw(3) << stringvalue << "*" << endl;

	cout << setw(9) << -3.25 << endl;
	cout << internal << setw(9) << -3.25 << endl;

	cout << "bt: " << bt << " bf: " << bf << endl;
	cout << boolalpha;
	cout << "bt: " << bt << " bf: " << bf << endl;
	cout << noboolalpha;
	cout << "bt: " << bt << " bf: " << bf << endl;

	cout << showpos;

	cout << "pos_int: " << idefault << "  neg_int: " << ismall;
	cout << "pos_f: " << ddefault << "  neg_f: " << dsmall;
	cout << "  zero_int: " << 0 << endl;

	cout << "decimal:     " << ibig << endl;
	cout << "octal:       " << oct << ibig << endl;
	cout << "hexadecimal: " << hex << ibig << endl << endl;

	cout << showbase;
	cout << "decimal:     " << dec << ismall << endl;
	cout << "octal:       " << oct << ismall << endl;
	cout << "hexadecimal: " << hex << ismall << endl << endl;

	cout << noshowbase;
	cout << "decimal:     " << dec << dsmall << endl;
	cout << "octal:       " << oct << dsmall << endl;
	cout << "hexadecimal: " << hex << dsmall << endl << endl;

	cout << "small:  " << dsmall << endl;
	cout << "default:  " << ddefault << endl;
	cout << "whole:  " << fwhole << endl << endl;

	cout << scientific;
	cout << "small:  " << dsmall << endl;
	cout << "default:  " << ddefault << endl;
	cout << "whole:  " << fwhole << endl << endl;

	cout << fixed;
	cout << "small:  " << dsmall << endl;
	cout << "default:  " << ddefault << endl;
	cout << "whole:  " << fwhole << endl << endl;

	cout.unsetf(ios::fixed | ios::scientific);

	cout << "small:  " << dsmall << endl;
	cout << "default:  " << ddefault << endl;
	cout << "whole:  " << fwhole << endl << endl;


	cout << showpoint;

	cout << "pi:    " << pi << endl;
	cout << "small: " << dsmall << endl;
	cout << "default: " << ddefault << endl;
	cout << "whole:   " << fwhole << endl;

	cout << "lots:    " << pi << endl;
	cout << "small: " << dsmall << endl;
	cout << "default: " << ddefault << endl;
	cout << "whole:   " << fwhole << endl;

	return 0;
}