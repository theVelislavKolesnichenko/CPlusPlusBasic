#include <iostream>
#include <locale>
using namespace std;

int main() {
	
	 int A, B;
	 float C, D;
	 cout << "Въведете A=" << endl;
     cin >> A ;
	 cout << "Въведете B=" << endl;
	 cin >> B ;
	 C = A / B;
	 D = (float)A / B;
	 cout << "C=" << C<<endl;//Когато се разделят два интиджъра резултата ще е интиджър, защото флоат е зададен само на C но не както на D се конвертира интиджъра A във float.
	 cout << "D=" << D;//Когато се разделя float на  интиджър тогава резултата може да бъде с плаваша запетая.

	 





	 return 0;

}


