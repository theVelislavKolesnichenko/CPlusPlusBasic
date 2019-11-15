#include <iostream>
using namespace std;

int main()
{
	int a;
	cout << "a=";
	cin >> a;
	int b;
	cout << "b=";
	cin >> b;
	float c;
	c = a / b;//celochisleno delenie, kudeto "a" i "b" sa celi chisla
	cout << c << endl;
	float d;
	d = (float)a / b;//stoinostta na "a" se prevrushta v chislo s plavashta zapetaq, sled koeto i na "b", i se izvurshva delenie na chisla s plavashta zapetaq
	cout << d << endl;
	
	return 0;
}