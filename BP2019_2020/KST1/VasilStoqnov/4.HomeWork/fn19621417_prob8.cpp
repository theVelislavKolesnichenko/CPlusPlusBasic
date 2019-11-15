#include <iostream>
using namespace std;
int func(int number);
void main()
{

	cout << "vuvedete chislo=";
	int number;
	cin >> number;
	func(number)
		return 0;
}

int func(int number)
{
	if (number > 999 && number < 10000) {
		cout << "chisloto e chetiricifreno" << endl;
	}
	else if (number>9999){
		cout << "chisloto ne e chetiricifreno i e po-golqmo" << endl;
	}
	else if (number < 999)
	{
		cout << "chisloto ne e chetiricifreno i e po-malko" << endl;
	}
}
