#include <iostream>
using namespace std;

int main(){
	int a, b, c, sum;
	float average;

	cout << "vavedi 3 chisla = " << endl;
	cin >> a >> b>> c ;
	sum = a + b +c ;
	average = sum / 3;
	cout << "sumata ot " << a << " i " << b << " i "<< c << "e" << sum << "." << endl;
	cout << "srednata stoinost e= " << average << "." << endl;
	return 0;
}