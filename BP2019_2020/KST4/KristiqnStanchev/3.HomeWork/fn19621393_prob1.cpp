#include <iostream>
#include <conio.h>

using namespace std;

void outputStart();
void outputFinal();

int main()
{
	outputStart();
	_getwch();
	outputFinal();

	return 0;
}

void outputStart() {
	cout<<("Start ?\n");
}

void  outputFinal() {
	cout<<("Final !\n");
}
